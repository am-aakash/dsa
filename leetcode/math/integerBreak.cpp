class Solution
{
public:
    int integerBreak(int n)
    {
        if (n <= 3)
            return n - 1;
        return pow(3, (n - 2) / 3) * (n - (3 * ((n - 2) / 3)));
    }
};