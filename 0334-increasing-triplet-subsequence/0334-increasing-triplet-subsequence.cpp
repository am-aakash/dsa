#define ss second

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int third = INT_MAX, second = INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i]>second) return true;
            else if(nums[i]>third && nums[i]<second) second = nums[i];
            else if(nums[i]<third) third = nums[i];
        }
        return false;
    }
};