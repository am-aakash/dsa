class LRUCache {
public:
    class node{
    public:
        int key;
        int val;
        node *next;
        node *prev;
        node(int k, int v){
            key=k, val=v;
        }
    };
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    unordered_map<int,node*> m; 
    int cap;
    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    // head--temp  ->  head--newNode--temp
    void addNode(node* newNode){
        node* temp=head->next;
        head->next=newNode;
        temp->prev=newNode;
        newNode->next=temp;
        newNode->prev=head;
    }
    
    // delprev--delnode--delnext  ->  delprev--delnext
    void deleteNode(node* delnode){
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    // Gives value of key from map & moves it to 1st place of DLL (i.e. non LRU place)
    int get(int key) {
        if(m.find(key)!=m.end()){
            node* resNode=m[key];
            int res=resNode->val;
            m.erase(key);
            deleteNode(resNode);
            addNode(resNode);
            m[key]=resNode;
            return res;
        }
        else return -1;
    }
    
    // if key already in dll remove it (to be added next)
    // if map/cache is full erase LRU(last place node)
    // add the node to 1st place
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            node* existingNode=m[key];
            m.erase(key);
            deleteNode(existingNode);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new node(key,value));
        m[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
