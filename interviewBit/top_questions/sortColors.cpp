void Solution::sortColors(vector<int> &A)
{
    int l = 0, r = A.size() - 1;
    for (int i = 0; i <= r;)
    {
        if (A[i] == 0 && i != l)
        {
            swap(A[i], A[l]);
            l++;
        }
        else if (A[i] == 2 && i <= r)
        {
            swap(A[i], A[r]);
            r--;
        }
        else
            i++;
    }
}
