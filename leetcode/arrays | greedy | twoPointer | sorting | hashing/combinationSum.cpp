class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates, int i, int target, vector<int> curr){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(i>candidates.size()-1) return;
        if(target<candidates[i]){
            helper(candidates, i+1, target, curr);
            return;
        }
        helper(candidates, i+1, target, curr);
        curr.push_back(candidates[i]);
        helper(candidates, i, target-candidates[i], curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        helper(candidates, 0, target, curr);
        return ans;
    }
};
