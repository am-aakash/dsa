int Solution::solve(vector<int> &a, int k)
{
    int i = 0, j = 0, zeros = 0, ans = 0;
    while (j < a.size())
    {
        if (a[j] == 0)
            zeros++;
        if (zeros > k)
        {
            if (a[i] == 0)
                zeros--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
