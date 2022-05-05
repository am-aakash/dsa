class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        map<char,int> m;
        for(auto i: s) m[i]++;
        for(auto i: order){
            while(m[i]>0){
                ans+=i;
                m[i]--;
            }
        }
        for(auto it:m){
            while(it.second>0){
                ans+=it.first;
                it.second--;
            }
        }
        return ans;
    }
};
