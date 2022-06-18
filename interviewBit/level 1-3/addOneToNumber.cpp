vector<int> Solution::plusOne(vector<int> &A)
{
    reverse(A.begin(), A.end());
    int carry = 1;
    for (int i = 0; i < A.size(); i++)
    {
        if (carry == 1)
        {
            A[i] += carry;
            if (A[i] < 10)
            {
                carry = 0;
                break;
            }
            else
            {
                A[i] = 0;
            }
        }
    }
    if (carry == 1)
        A.push_back(1);

    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] > 0)
            break;
        if (A[i] == 0)
            A.pop_back();
    }
    reverse(A.begin(), A.end());

    return A;
}
