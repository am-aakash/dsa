class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), res = nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        for(int l=0; l<n-2; l++){
            int m=l+1, r=n-1;
            while(m<r){
                int curr = nums[l] + nums[m] + nums[r];
                if(abs(curr-target) < abs(res-target)) res = curr;
                if(curr==target) return target;
                if(curr < target) m++;
                else r--;
            }
        }
        return res;
    }
};