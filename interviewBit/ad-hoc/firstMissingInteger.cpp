int Solution::firstMissingPositive(vector<int> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        int correctPos = A[i] - 1;
        while (A[i] >= 1 && A[i] <= n && A[i] != A[correctPos])
        {
            swap(A[i], A[correctPos]);
            correctPos = A[i] - 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != A[i])
            return i + 1;
    }
    return n + 1;
}
