int Solution::maximumGap(const vector<int> &A)
{
    vector<pair<int, int>> mp;
    for (int i = 0; i < A.size(); i++)
        mp.push_back({A[i], i});
    sort(mp.begin(), mp.end());
    int size = mp.size(), maxi = mp[size - 1].second, mini = mp[0].second;
    vector<int> maxArr(size), minArr(size);

    for (int i = size - 1; i >= 0; i--)
        maxi = max(maxi, mp[i].second), maxArr[i] = maxi;
    for (int i = 0; i < size; i++)
        mini = min(mini, mp[i].second), minArr[i] = mini;

    int ans = INT_MIN;

    for (int i = 0; i < size; i++)
        ans = max(ans, maxArr[i] - minArr[i]);
    return ans;
}
