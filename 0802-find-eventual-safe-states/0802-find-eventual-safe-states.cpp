class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& G) {
        int N = G.size();
        vector<vector<int>> R(N); // adjacency list
        
        /* TOPOSORT SOLUTION */
        // https://leetcode.com/problems/find-eventual-safe-states/discuss/2600013/C%2B%2B-or-Topological-Sort-or-Diagram
        
        // using outdegree for getting the number of connections going out of that particular "i"
        // using safe to store safe elements whose outdegrees can be reduced to 0.
        vector<int> outdegree(N), safe(N), ans;
        queue<int> q;
        for (int i = 0; i < N; ++i) {
            for (int v : G[i]) {
                R[v].push_back(i); // creation of adjacency list from matrix
            }
            outdegree[i] = G[i].size(); // G[i].size() for determining the outgoing connections
            if (outdegree[i] == 0) q.push(i); // if no outgoing connections
        }
        
        while (q.size()) {
            int u = q.front();
            q.pop();
            safe[u] = 1; // add to safe nodes as there are no outgoing connections to "u"
            for (int v : R[u]) {
                if (--outdegree[v] == 0) q.push(v); // TOPO
            }
        }
        
        for (int i = 0; i < N; ++i) {
            if (safe[i]) ans.push_back(i);
        }
        return ans;
    }
};