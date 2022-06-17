class Solution {
public:
    set<vector<int>> ansSet;
    
    void helper(vector<int> nums, int i, vector<int> res){
        if(i==nums.size()){
            sort(res.begin(), res.end());
            ansSet.insert(res);
            return;
        }
        helper(nums, i+1, res);
        res.push_back(nums[i]);
        helper(nums, i+1, res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        helper(nums, 0, temp);
        vector<vector<int>> ans;
        for(auto it: ansSet) ans.push_back(it);
        return ans;
    }
};