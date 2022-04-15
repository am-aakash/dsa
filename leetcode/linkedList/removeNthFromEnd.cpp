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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* node=head;
        ListNode* ans=node;
        while(head!=NULL){
            size++;
            head=head->next;
        }
        size-=n;
        if(size==0) ans=node->next;
        while(size>0){
            size--;
            if(size==0 && n>1){
                node->next=node->next->next;
            }
            else if(size==0 && n==1){
                node->next=NULL;
            }
            else{
                node=node->next;
            }
        }
        return ans;
    }
};
