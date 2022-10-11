class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return f(0, n, nums, dp);
    }

    int f(int ind, int n, vector<int>& nums, vector<int>& dp) {
        if(ind == n-1) return 0;
        if(dp[ind] != -1) return dp[ind];

        int jump = nums[ind], mini = 1e9;
        for(int i = ind + 1; i <= min(ind+jump, n-1); i++) {
            int val = 1 + f(i, n, nums, dp);
            mini = min(mini, val);
        }
        return dp[ind] = mini;
    }
};