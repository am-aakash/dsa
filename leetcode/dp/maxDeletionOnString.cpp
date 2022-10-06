int pi[5000],n,dp[5000];
class Solution {
public:
    vector<int> kmp(string s, int st){
        for(int i=0; i<s.size(); i++)
            pi[i]=0;
        for(int i=1; i<s.size(); i++){
            int j=pi[i-1];
            while(j>0 && s[i]!=s[j])
                j=pi[j-1];
            if(s[i]==s[j])
                j++;
            pi[i]=j;
        }
        vector<int> ans;
        for(int i=0; i<s.size(); i++){
            if(pi[i]==(i+1)/2 && (i+1)%2==0)
                ans.pb(i/2);
        }
        return ans;
    }
    int solve(string &s, int i){
        if(i>=s.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        vector<int> v=kmp(s.substr(i,s.size()-i),i);
        int ans=1;
        for(auto j:v){
            ans=max(ans,1+solve(s,j+1+i));
        }
        return dp[i]=ans;
    }
    int deleteString(string s) {
        memset(dp,-1,sizeof dp);
        n=s.size();
        return solve(s,0);
    }
};
