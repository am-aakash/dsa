class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>> ans;
        vector<pair<int,int>> vp;
        for(auto it:v) vp.push_back({it[0],it[1]});
        sort(vp.begin(),vp.end());
        int st=vp[0].first, end=vp[0].second;
        for(int i=1;i<vp.size();i++){
            if(vp[i].first>end){
                vector<int> temp;
                temp.push_back(st); temp.push_back(end);
                ans.push_back(temp);
                st=vp[i].first, end=vp[i].second;
            }
            else{
                end=max(end,vp[i].second);
            }
        }
        vector<int> temp;
        temp.push_back(st); temp.push_back(end);
        ans.push_back(temp);
        return ans;
    }
};
