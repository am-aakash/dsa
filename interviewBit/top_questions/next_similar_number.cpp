string reverse(string str, int len, int l, int r)
{
    if (l < 0 || r >= len || l > r)
        return str;
    while (l < r)
    {
        char c = str[l];
        str[l] = str[r];
        str[r] = c;

        l++;
        r--;
    }
    return str;
}

string Solution::solve(string A)
{
    int n = A.length(), greater_found = -1;
    string ans;
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[n - 1])
        {
            greater_found = i;
            break;
        }
    }
    if (greater_found < 0)
        return "-1";

    int swappedIndex = -1;
    for (int i = n - 2; i > greater_found; i--)
    {
        if (A[i] < A[i + 1])
        {
            swappedIndex = i;
            break;
        }
    }

    if (swappedIndex == -1)
    {
        swap(A[greater_found], A[n - 1]);
        sort(A.begin() + greater_found + 1, A.end());
        ans = A;
    }
    else
    {
        int to_swap = swappedIndex + 1;
        for (int i = swappedIndex + 1; i < n; i++)
        {
            if (A[i] < A[to_swap] && A[i] > A[swappedIndex])
                to_swap = i;
        }
        swap(A[swappedIndex], A[to_swap]);
        sort(A.begin() + swappedIndex + 1, A.end());
        ans = A;
    }
    return A;
}
