class Solution
{
public:
    int missingNumber(vector<int> &a)
    {
        int totalSum = a.size() * (a.size() + 1) / 2, currSum = 0;
        for (auto it : a)
            currSum += it;
        return totalSum - currSum;
    }
};