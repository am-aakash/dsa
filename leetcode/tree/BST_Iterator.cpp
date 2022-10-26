class BSTIterator {
private : stack<TreeNode*>st;
public:
    BSTIterator(TreeNode* root) {
        insert(root);
    }
    
    int next() {
        TreeNode *temp=st.top();
        st.pop();
        insert(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
private: 
    void insert(TreeNode *root){
        while(root!=NULL){
            st.push(root);
            root=root->left;
        }
    }
};
