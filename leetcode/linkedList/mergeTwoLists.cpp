class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Base case -> If list1 is null return list2 and vice versa
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        // Add next in sorted order in ans using Recursion
        ListNode *ans;
        
        if(list1->val <= list2->val){
		    // current ans node set to current min(list1->val,list2->val) then add address to upcoming parts
            ans=list1;
            ans->next = mergeTwoLists(list1->next,list2);
        }
        else{
            ans=list2;
            ans->next = mergeTwoLists(list2->next,list1);
        }
        return ans;
    }
};
