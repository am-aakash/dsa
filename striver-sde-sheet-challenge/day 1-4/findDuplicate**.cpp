class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n=a.size();
        
        if(n==1) return -1;
        
        int slow = a[0], fast = a[a[0]];
        while(slow!=fast){
            slow=a[slow];
            fast=a[a[fast]];
        }
        fast=0;
        while(slow!=fast){
            slow=a[slow];
            fast=a[fast];
        }
        return slow;
    }
};
