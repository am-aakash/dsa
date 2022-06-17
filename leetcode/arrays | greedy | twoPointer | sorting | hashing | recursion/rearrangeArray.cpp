class Solution
{
public:
    vector<int>(vector<int> &a)
    {
        int n = a.size();
        vector<int> ans(n);
        int pos1 = 0, pos2 = 1, i = 0;
        for (auto it : a)
        {
            if (it > 0)
                ans[pos1] = it, pos1 += 2;
            else
                ans[pos2] = it, pos2 += 2;
        }
        return ans;
    }
};