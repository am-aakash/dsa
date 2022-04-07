class Solution {
public:
    int helper(vector<vector<int>>& triangle, int i, int j, vector<vector<int>>& dp){
        if(i==triangle.size()-1) return triangle[i][j]; // Base Case
        if(dp[i][j]!=-1) return dp[i][j];
        
        return dp[i][j] = min(helper(triangle, i+1, j ,dp),helper(triangle, i+1, j+1 ,dp)) + triangle[i][j];
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size(), n=triangle[m-1].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1,-1));
        return helper(triangle, 0 , 0, dp);
    }
};
