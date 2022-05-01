class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        set<pair<int,int>> s;
        map<int,int> m;
        for(int i=0; i<logs.size(); i++){
            int p1=logs[i][0], p2=logs[i][1];
            s.insert({p1,p2});
        }
        for(auto it: s){
            m[it.first]++;
        }
        vector<int> ans(k, 0);
        for(auto it:m){
            ans[it.second-1]++;
        }
        return ans;
    }
};
