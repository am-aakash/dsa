class Solution
{
public:
    vector<string> ans;
    void builder(int n1, int n2, string s)
    {
        if (n2 == 0)
            ans.push_back(s);
        else if (n1 == n2)
        {
            s += "(", n1--;
            builder(n1, n2, s);
        }
        else if (n1 == 0)
        {
            s += ")", n2--;
            builder(n1, n2, s);
        }
        else
        {
            string s1 = s + "(", s2 = s + ")";

            builder(n1 - 1, n2, s1);
            builder(n1, n2 - 1, s2);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        builder(n, n, "");
        return ans;
    }
};