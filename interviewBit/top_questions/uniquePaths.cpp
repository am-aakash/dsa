int uniquePathsUtil(int i, int j, int A, int B, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int left = uniquePathsUtil(i - 1, j, A, B, dp);
    int top = uniquePathsUtil(i, j - 1, A, B, dp);

    return dp[i][j] = left + top;
}

int Solution::uniquePaths(int A, int B)
{
    vector<vector<int>> dp(A + 1, vector<int>(B + 1, -1));
    return uniquePathsUtil(A - 1, B - 1, A, B, dp);
}
