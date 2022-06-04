class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0, max = (s.length() == 0) ? 0 : 1, temp = 0;
        map<int, int> mpp;
        while (i < s.length())
        {
            if (mpp.count(s[i]) > 0)
            {
                temp = 0;
                i = mpp[s[i]] + 1;
                mpp.clear();
            }
            else
            {
                mpp[s[i]] = i;
                i++, temp++;
                max = (temp > max) ? temp : max;
            }
        }
        return max;
    }
};