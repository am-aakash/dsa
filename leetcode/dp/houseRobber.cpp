class Solution {
public:
    int rob(vector<int>& a) {
        int dp[101];
        if(a.size()==1) return a[0];
        if(a.size()==2) return max(a[0],a[1]);
        
        dp[0]=a[0], dp[1]=a[1], dp[2]=a[2]+a[0];
        for(int i=3;i<a.size();i++){
            dp[i]=max(dp[i-2], dp[i-3])+a[i];
        }
        return max(dp[a.size()-1],dp[a.size()-2]);
    }
};
