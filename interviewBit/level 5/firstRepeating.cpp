int Solution::solve(vector<int> &A)
{
    unordered_map<int, int> mpp;
    for (auto it : A)
        mpp[it]++;

    for (auto it : A)
        if (mpp[it] > 1)
            return it;

    return -1;
}
