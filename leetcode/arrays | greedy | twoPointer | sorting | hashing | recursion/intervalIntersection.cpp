class Solution
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>> &fl, vector<vector<int>> &sl)
    {
        int n = fl.size(), m = sl.size(), f = 0, s = 0;
        vector<vector<int>> ans;
        if (n == 0 || m == 0)
            return ans;

        while (f < n && s < m)
        {
            int l = max(fl[f][0], sl[s][0]);
            int r = min(fl[f][1], sl[s][1]);

            if (l <= r)
                ans.push_back({l, r});

            if (fl[f][1] < sl[s][1])
                f++;
            else
                s++;
        }

        return ans;
    }
};