int Solution::titleToNumber(string A)
{
    int ans = 0;

    for (int i = 0; i < A.length(); i++)
    {
        ans = ans * 26;
        ans += A[i] - 'A' + 1;
    }
    return ans;
}
