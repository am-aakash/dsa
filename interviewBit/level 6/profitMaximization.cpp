int Solution::solve(vector<int> &A, int B)
{
    priority_queue<int> pq;

    for (auto it : A)
        pq.push(it);

    int ans = 0;
    while (B--)
    {
        int temp = pq.top();
        pq.pop();
        ans += temp;
        temp--;
        pq.push(temp);
    }
    return ans;
}
