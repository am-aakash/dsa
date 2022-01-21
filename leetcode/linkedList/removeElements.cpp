class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        ListNode* temp=head; 
        while(temp && temp->next){
            if(temp->next->val==val){
                temp->next=temp->next->next;
            }
            else temp=temp->next;
        }
        return head;
    }
};
