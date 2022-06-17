
int leastInterval(vector<char> &tasks, int n)
{
    map<char, int> hash;
    for (auto it : tasks)
        hash[it]++;
    if (n == 0)
        return tasks.size();
    int maxi = -1, cntMax = 0;
    for (auto it : hash)
        if (it.second > maxi)
            maxi = it.second;
    for (auto it : hash)
        if (it.second == maxi)
            cntMax++;
    // cout<<maxi<<" "<<cntMax;
    return max(int(tasks.size()), (maxi - 1) * (n + 1) + cntMax);
}
