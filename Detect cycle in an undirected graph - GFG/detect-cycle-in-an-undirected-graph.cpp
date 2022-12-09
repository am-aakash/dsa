//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // if cycle in current connected component -> true
    bool isCycleBfsUtil(int V, vector<int> adj[], vector<bool> &vis, int currN){
    	queue<int> q;
    	vector<int> prevNode(V,-1);
    	vis[currN] = true;
    	q.push(currN);
    
    	while(q.size()>0){
        	int parent = q.front();
        	q.pop();
        	
        	for(auto curr : adj[parent]){
        		if(vis[curr]==false){
        			vis[curr] = true;
        			q.push(curr);
        			prevNode[curr] = parent;
        		}
        		else {
        			if(prevNode[parent] != curr) return true;
        		}
        	}
        }
    
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
    	for(int i=0; i<V; i++){
    		if(vis[i]==false && isCycleBfsUtil(V, adj, vis, i)) return true;
    	}
        return false;
    }

};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends