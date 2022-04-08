class Solution {
public:
    int uniquePathsUtil(vector<vector<int>>& obstacleGrid, int m, int n, int i, int j, vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(obstacleGrid[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        return dp[i][j] = uniquePathsUtil(obstacleGrid, m, n, i-1, j, dp) + uniquePathsUtil(obstacleGrid, m, n, i, j-1, dp);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        vector<vector<int>> dp(m+1,vector<int> (n+1, -1));
        // if(obstacleGrid[m-1][n-1]==1) return 0;
        
        return uniquePathsUtil(obstacleGrid, m, n, m-1, n-1, dp);
    }
};
