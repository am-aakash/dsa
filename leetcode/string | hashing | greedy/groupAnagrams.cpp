class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        string temp;

        for (auto it : strs)
        {
            temp = it;
            sort(it.begin(), it.end());
            mp[it].push_back(temp);
        }

        for (auto it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};