/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* it=head;
        int size=0;
        while(it!=NULL){
            size++;
            it=it->next;
        }
        if(k>size/2) k=size-k+1;
        it=head;
        int val1=-1,val2=-1;
        for(int i=1;i<=size;i++){
            if(i==k) val1=it->val;
            if(i==size-k+1) val2=it->val, it->val=val1;
            it=it->next;
        }
        it=head;
        for(int i=1;i<=size;i++){
            if(i==k) it->val=val2;
            it=it->next;
        }
        
        return head;
    }
};
