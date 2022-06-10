int Solution::isPalindrome(int A)
{
    int ans = 1;
    string s = to_string(A);
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
            ans = 0;
    }
    return ans;
}
