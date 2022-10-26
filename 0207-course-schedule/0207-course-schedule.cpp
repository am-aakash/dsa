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
    
    bool canFinish(int N, vector<vector<int>>& prerequisites) {
        vector<int> adj[N];
	    for(auto p : prerequisites){
            adj[p[0]].push_back(p[1]);
        }
	    
	    vector<int> topoSort = kahnsAlgorithm(N, adj);
	    if(topoSort.size() < N) return false;
	    return true;
    }
};