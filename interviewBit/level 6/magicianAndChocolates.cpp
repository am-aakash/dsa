int Solution::nchoc(int A, vector<int> &B)
{
    priority_queue<int> pq;
    for (auto it : B)
        pq.push(it);

    long long int ans = 0;
    for (int i = 1; i <= A; i++)
    {
        ans = ans + pq.top();
        ans = ans % (int)(1e9 + 7);
        pq.push(pq.top() / 2);
        pq.pop();
    }
    return ans;
}
