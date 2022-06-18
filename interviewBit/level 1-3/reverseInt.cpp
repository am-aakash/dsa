int Solution::reverse(int A)
{
    vector<int> arr;
    bool neg = false;
    if (A < 0)
        neg = true, A *= -1;

    while (A > 0)
    {
        arr.push_back(A % 10);
        A /= 10;
    }
    int n = arr.size() - 1;
    long long int op = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        op += arr[i] * pow(10, n);
        n--;
    }

    if (op > INT_MAX)
        op = 0;

    if (neg)
        op *= -1;

    return (int)op;
}
