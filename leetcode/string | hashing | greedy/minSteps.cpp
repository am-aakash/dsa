class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mpp;
        for(auto it:s) mpp[it]++;
        for(auto it:t) if(mpp[it]>0) mpp[it]--;
        
        int ans=0;
        for(auto it:mpp) ans+=it.second;
        return ans;
    }
};
