class Solution {
public:
    vector<vector<int>> ans;
    int lim;
    void helper(vector<int>& candidates, int i, int target, vector<int> curr){
        if(target==0){
            if(curr.size()==lim) ans.push_back(curr);
            return;
        }
        if(i>candidates.size()-1) return;
        if(target<candidates[i]){
            helper(candidates, i+1, target, curr);
            return;
        }
        helper(candidates, i+1, target, curr);
        curr.push_back(candidates[i]);
        helper(candidates, i+1, target-candidates[i], curr);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr, candidates;
        lim=k;
        for(int i=1;i<=9; i++) candidates.push_back(i);
        helper(candidates, 0, n, curr);
        return ans;
    }
};
