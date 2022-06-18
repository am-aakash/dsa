class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = s.size(), m = p.size();
        vector<int> hash(26, 0), ans;
        for (auto it : p)
            hash[it - 'a']++;
        for (int i = 0; i < n - m + 1; i++)
        {
            if (hash[s[i] - 'a'] == 0)
                continue;
            vector<int> tempHash(26, 0);
            for (int j = i; j < m + i && j < n; j++)
                tempHash[s[j] - 'a']++;

            bool check = true;
            for (int j = 0; j <= 25; j++)
                if (tempHash[j] != hash[j])
                    check = false;
            if (check)
                ans.push_back(i);
        }
        return ans;
    }
};