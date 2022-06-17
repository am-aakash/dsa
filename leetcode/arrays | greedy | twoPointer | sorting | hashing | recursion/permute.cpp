class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& a, int sel, vector<int> curr, map<int,int> left){
        curr.push_back(sel);
        left[sel]--;
        if(curr.size()==a.size()){
            ans.push_back(curr);
            return;
        }
        for(auto it: left){
            if(it.second==1) helper(a, it.first, curr, left);
        }
        
    }
    vector<vector<int>> permute(vector<int>& a) {
        vector<int> curr;
        map<int,int> left;
        for(auto it: a) left[it]++;
        for(auto it: a) helper(a, it, curr, left);
        return ans;
    }
};
