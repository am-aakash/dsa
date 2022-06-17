class Solution
{
public:
    vector<vector<int>> ans;

    void filler(vector<int> nums, int i, vector<int> res)
    {
        if (i == nums.size())
        {
            ans.push_back(res);
            return;
        }

        filler(nums, i + 1, res);
        res.push_back(nums[i]);
        filler(nums, i + 1, res);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> temp;
        filler(nums, 0, temp);
        return ans;
    }
};