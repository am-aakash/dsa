int numRabbits(vector<int> &answers){
    int ans = 0, temp;
    int hash[1001] = {0};
    for (auto it : answers)
        hash[it]++;
    for (int i = 0; i < 1001; i++)
    {
        if (hash[i] == 0)
            continue;
        if (i == 1)
        {
            ans += (hash[1] / 2) * 2;
            ans += (hash[i] & 1) ? 2 : 0;
            continue;
        }
        if (i == 0)
        {
            ans += hash[0];
            continue;
        }
        if (hash[i] % (i + 1) >= 1 && (hash[i] / (i + 1)) >= 1)
        {
            ans += (hash[i] / (i + 1)) * (i + 1) + (i + 1);
            continue;
        }
        else if (hash[i] % (i + 1) == 0 && (hash[i] / (i + 1)) >= 1)
        {
            ans += (hash[i] / (i + 1)) * (i + 1);
        }
        else if ((hash[i] / (i + 1)) == 0)
        {
            ans += i + 1;
        }
    }
    return ans;
}