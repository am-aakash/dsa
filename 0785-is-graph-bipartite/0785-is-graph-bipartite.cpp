class Solution {
public:
    bool dfs(vector<vector<int>>& adj, int i, int curr, vector<int>& col){
        int next = (curr==1)? 2: 1;
        col[i]=curr;
        for(int el : adj[i]){
            if(col[el]==0){
                if(!dfs(adj, el, next, col)) return false;
            }
            else{
                if(col[i]==col[el]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int v = adj.size();
        vector<int> col(v, 0);
        for(int i=0; i<v; i++){
            if(col[i]==0 && !dfs(adj, i, 1, col)) return false;
        }
        return true;
    }
};