class Solution
{
public:
    vector<int> arrayChange(vector<int> &a, vector<vector<int>> &op)
    {
        map<int, int> mp;
        for (int i = 0; i < a.size(); i++)
            mp[a[i]] = i;

        for (int i = 0; i < op.size(); i++)
        {
            int ind = mp[op[i][0]];
            mp[op[i][0]] = -1;
            mp[op[i][1]] = ind;
        }

        for (auto it : mp)
        {
            if (it.second >= 0)
            {
                a[it.second] = it.first;
            }
        }
        return a;
    }
};