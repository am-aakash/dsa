int minPairSum(vector<int>& nums) {
        int ans = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()/2 ; i++){
            if(nums[i]+nums[nums.size()-i-1] > ans) ans = nums[i] + nums[nums.size()-i-1];
        }
        return ans;
}
