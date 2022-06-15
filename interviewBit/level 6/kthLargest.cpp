vector<int> Solution::solve(vector<int> &A, int B)
{
    vector<int> ans;
    priority_queue<int> pq;
    for (auto it : A)
        pq.push(it);
    while (B--)
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
