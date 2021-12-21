int minPatches(vector<int> &nums, int n)
{
    unsigned missing = 1, i = 0, ans = 0;
    while (missing <= n)
    {
        if (i < nums.size() && nums[i] <= missing)
        {
            missing += nums[i];
            i++;
        }
        else
        {
            missing += missing;
            ans++;
        }
    }
    return ans;
}