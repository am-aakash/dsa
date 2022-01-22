class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* ans = NULL;
        ListNode* curr = head;
        ListNode* nextNode = NULL;
        while(curr){
            nextNode = curr->next;
            curr->next=ans;
            ans=curr;
            curr=nextNode;
        }
        return ans;
    }
};
