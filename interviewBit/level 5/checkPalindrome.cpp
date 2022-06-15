int Solution::solve(string A)
{
    unordered_map<char, int> mpp;
    bool odd = false;
    for (auto it : A)
        mpp[it]++;
    for (auto it : mpp)
    {
        if (it.second % 2)
        {
            if (odd)
                return 0;
            odd = true;
        }
    }
    return 1;
}
