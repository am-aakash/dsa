//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    vector<int> indegreeHelper(int N, vector<int> adj[]){
        vector<int> indegree(N, 0);
        for(int i=0; i<N; i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        return indegree;
    }
public:
    vector<int> kahnsAlgorithm(int N, vector<int> adj[]){
        vector<int> indegree = indegreeHelper(N, adj);
        
        queue<int> q;
        for(int i=0; i<N; i++){
            if(indegree[i]==0) q.push(i);
        }
        
        vector<int> topoSort;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topoSort.push_back(node);
            
            for(auto it: adj[node]){
                indegree[it]--;
                if(!indegree[it]) q.push(it);
            }
        }
        return topoSort;
    }
    
	bool isPossible(int N, vector<pair<int, int>>& prerequisites) {
	    vector<int> adj[N];
	    for(auto pii : prerequisites){
            adj[pii.first].push_back(pii.second);
        }
	    
	    vector<int> topoSort = kahnsAlgorithm(N, adj);
	    if(topoSort.size() < N) return false;
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends