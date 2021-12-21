int romanToInt(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        //For 'C'
        if (s[i] == 'C' && (s[i + 1] == 'M' || s[i + 1] == 'D'))
            ans -= 100;
        else if (s[i] == 'C')
            ans += 100;

        //For 'D' and 'M'
        if (s[i] == 'D')
            ans += 500;
        if (s[i] == 'M')
            ans += 1000;

        //For 'X'
        if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            ans -= 10;
        else if (s[i] == 'X')
            ans += 10;

        //For 'L' and 'V'
        if (s[i] == 'L')
            ans += 50;
        if (s[i] == 'V')
            ans += 5;

        //For 'I'
        if (s[i] == 'I' && (s[i + 1] == 'X' || s[i + 1] == 'V'))
            ans -= 1;
        else if (s[i] == 'I')
            ans += 1;
    }
    return ans;
}