int Solution::hammingDistance(const vector<int> &A)
{
    int cnt;
    long long int ans = 0;

    for (int i = 0; i < 32; i++)
    {
        cnt = 0;
        for (auto it : A)
        {
            if (it & (1 << i))
                cnt++;
        }
        ans += 2 * cnt * (A.size() - cnt);
        ans %= (int)(1e9 + 7);
    }
    return (int)ans;
}
