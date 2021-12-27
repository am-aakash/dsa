int minDeletions(string s){
    vector<int> arr(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 97]++;
    }
    int ans = 0;
    sort(arr.begin(), arr.end());
    for (int i = 24; i >= 0; i--)
    {
        if (arr[i] == arr[i + 1] && arr[i] != 0)
            arr[i]--, ans++;
        else if (arr[i] > arr[i + 1])
        {
            if (arr[i + 1] == 0)
                ans += arr[i], arr[i] = 0;
            else
                ans += arr[i] + 1 - arr[i + 1], arr[i] = arr[i + 1] - 1;
        }
    }
    return ans;
}