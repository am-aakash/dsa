class Solution {
public:
    int helper(int n, vector<int>& hash, vector<int>& dp){
        if(n==0) return 0;
        if(n==1) return hash[1];
        if(dp[n]>-1) return dp[n];
        
        int l=helper(n-1,hash,dp), r=helper(n-2,hash,dp)+hash[n];
        dp[n]=max(l,r);
        return dp[n];
    }
    
    int deleteAndEarn(vector<int>& a) {
        vector<int> hash(10001,0), dp(10001,-1);
        int maxi=0;
        for(auto it:a) hash[it]+=it, maxi=max(maxi,it);
        return helper(maxi, hash, dp);
    }
};
