class Solution
{
public:
    vector<int> twoSum(vector<int> &a, int x)
    {
        int i = 0, j = a.size() - 1;
        while (i < j)
        {
            if (a[i] + a[j] == x)
                return {i + 1, j + 1};
            if (a[i] + a[j] > x)
                j--;
            else
                i++;
        }
        return {-1, -1};
    }
};