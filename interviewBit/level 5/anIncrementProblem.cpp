vector<int> Solution::solve(vector<int> &A)
{
    unordered_map<int, int> map;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (map.find(A[i]) != map.end())
        {
            int key_curr = A[i];
            int index_for_curr_key = map[A[i]];
            A[index_for_curr_key]++;
            int new_key = A[index_for_curr_key];
            if (map.find(new_key) != map.end())
            {
                int index_for_new_key = map[new_key];

                if (index_for_new_key > index_for_curr_key)
                {
                    map[new_key] = index_for_curr_key;
                }
            }
            else
                map[new_key] = index_for_curr_key;
            map[key_curr] = i;
        }
        else
            map[A[i]] = i;
    }
    return A;
}
