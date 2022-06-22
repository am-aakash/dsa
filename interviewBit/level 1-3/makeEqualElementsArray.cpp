int Solution::solve(vector<int> &a, int x)
{
    for (int i = 1; i < a.size(); i++)
    {
        vector<int> prev = {a[i - 1], a[i - 1] + x, a[i - 1] - x}, curr = {a[i], a[i] + x, a[i] - x};

        bool f = false;
        for (int j1 = 0; j1 < 3; j1++)
            for (int j2 = 0; j2 < 3; j2++)
                f = (prev[j1] == curr[j2]) || f;

        if (!f)
            return 0;
    }
    return 1;
}
