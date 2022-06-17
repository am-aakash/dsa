class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> mp;
        vector<vector<int>> ans;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        for(auto it: mp){
            int sz=it.first;
            vector<int> temp;
            for(int i=0; i<it.second.size(); i++){
                if(temp.size()==sz) ans.push_back(temp), temp.clear();
                temp.push_back(it.second[i]);
            }
            if(temp.size()==sz) ans.push_back(temp), temp.clear();
        }
        return ans;
    }
};