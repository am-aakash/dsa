class Solution {
public:
    int dp[1001][1001];
    int solve(string &s, string &t, int i, int j){
        if(i>=s.size())
            return 1;
        if(j>=t.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i]==t[j])
            return dp[i][j]=solve(s,t,i+1,j+1)+solve(s,t,i,j+1);
        return dp[i][j]=solve(s,t,i,j+1);
    }
    int numDistinct(string s, string t) {
        memset(dp,-1,sizeof dp);
        return solve(t,s,0,0);
    }
};
