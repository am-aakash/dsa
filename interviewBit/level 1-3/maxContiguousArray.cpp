int Solution::maxSubArray(const vector<int> &A)
{
    int maxi = INT_MIN, sum = 0, maxNum = INT_MIN;

    for (int i = 0; i < A.size(); i++)
    {
        maxNum = max(maxNum, A[i]);
        sum += A[i];
        if (sum < 0)
            sum = 0;
        if (sum > maxi)
            maxi = sum;
    }
    if (maxNum < 0)
        return maxNum;
    return maxi;
}
