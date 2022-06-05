#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &A, int n)
{
    vector<int> hash(A.size() + 1, 0);
    pair<int, int> ans;
    int a, b;
    for (auto it : A)
        hash[it]++;
    for (int i = 1; i < hash.size(); i++)
    {
        if (hash[i] == 0)
            b = i;
        if (hash[i] == 2)
            a = i;
    }
    ans.first = b, ans.second = a;
    return ans;
}
