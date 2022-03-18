class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(), next=n-1;
        bool ans=false;
        if(n==1) return true;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>=next-i) ans=true,next=i;
            else ans=false;
        }
        return ans;
    }
};
