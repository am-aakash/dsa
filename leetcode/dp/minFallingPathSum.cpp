class Solution {
public:
    int minFallingPathSumUtil(vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& dp){
        if(j<0 || j>matrix.size()-1) return 1e9;
        if(i==0) return matrix[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int up = matrix[i][j] + minFallingPathSumUtil(matrix, i-1, j, dp);
        int dl = matrix[i][j] + minFallingPathSumUtil(matrix, i-1, j-1, dp);
        int dr = matrix[i][j] + minFallingPathSumUtil(matrix, i-1, j+1, dp);
        
        return dp[i][j] = min(up, min(dl,dr));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1,-1));
        
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini = min(mini, minFallingPathSumUtil(matrix, m-1, i, dp));
        }
        return mini;
    }
};
