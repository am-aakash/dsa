int Solution::searchMatrix(vector<vector<int>> &A, int x)
{
    int n = A.size(), m = A[0].size();
    int curri = 0, currj = m - 1;

    while (true)
    {
        if (curri >= n || currj < 0)
            return 0;

        if (A[curri][currj] == x)
            return 1;
        else if (A[curri][currj] > x)
            currj--;
        else if (A[curri][currj] < x)
            curri++;
    }
    return 0;
}
