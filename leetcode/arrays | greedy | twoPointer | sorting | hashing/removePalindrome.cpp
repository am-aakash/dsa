class Solution
{
public:
    int removePalindromeSub(string s)
    {
        bool isPalindrome = true;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - i - 1])
                isPalindrome = false;
        }
        if (isPalindrome)
            return 1;
        return 2;
    }
};