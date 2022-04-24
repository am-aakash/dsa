class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mpp1, mpp2;
        for(auto it: s) mpp1[it]++;
        for(auto it: t) mpp2[it]++;
        
        int ans=0;
        for(auto it: mpp2) ans+=abs(mpp1[it.first]-it.second), mpp1[it.first]=0, it.second=0;
        for(auto it: mpp1) ans+=it.second;
        return ans;
    }
};
