int Solution::perfectPeak(vector<int> &A)
{
    int n = A.size(), maxi = INT_MIN, mini = INT_MAX;
    vector<int> mx(n), mn(n);

    for (int i = 0; i < n; i++)
    {
        maxi = (maxi > A[i]) ? maxi : A[i];
        mx[i] = (maxi == A[0]) ? -1 : maxi;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        mini = (mini < A[i]) ? mini : A[i];
        mn[i] = (mini == A[n - 1]) ? -1 : mini;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (mx[i] == mn[i] && mx[i] == A[i] && mn[i + 1] != mn[i] && mx[i - 1] != mx[i])
            return 1;
    }
    return 0;
}
