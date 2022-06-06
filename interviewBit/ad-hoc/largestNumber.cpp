bool compareNum(string a, string b)
{
    return a + b > b + a;
    // ie 59 > 95 = false ..swapped
    // 330>303 = true ..no swap
}
string Solution::largestNumber(const vector<int> &A)
{
    string result;
    vector<string> str;
    for (int i = 0; i < A.size(); i++)
    {
        str.push_back(to_string(A[i]));
    }

    // compareNum used to swap if a+b<b+a && no swap when a+b>b+a
    sort(str.begin(), str.end(), compareNum);
    // returns string in sorted order 9 5 34 3 30
    // Add in result
    for (int i = 0; i < str.size(); i++)
    {
        result += str[i];
    }

    // remove heading zeros and return substr(pos:)
    int pos = 0;
    while (result[pos] == '0' && pos + 1 < result.size())
        pos++;
    return result.substr(pos);
}
