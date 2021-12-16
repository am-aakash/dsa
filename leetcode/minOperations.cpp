int minOperations(int n)
{
    int ans = 0;
    int it = (n & 1) ? n : n - 1;
    for (int i = it; i > 0; i -= 2)
        ans += n - i;
    return ans;
}

// https://leetcode.com/problems/minimum-operations-to-make-array-equal/