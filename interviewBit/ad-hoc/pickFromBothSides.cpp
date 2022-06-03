int Solution::solve(vector<int> &A, int b)
{
    int n = A.size(), x = n - b, mini, i = 0, j = x, sum = 0, tempSum = 0;
    for (auto it : A)
        sum += it;
    for (int k = 0; k < j; k++)
        tempSum += A[k];
    mini = tempSum;
    while (j < n)
    {
        tempSum += (A[j] - A[i]);
        mini = min(mini, tempSum);
        j++, i++;
    }
    return sum - mini;
}
