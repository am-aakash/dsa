#define ff first
#define ss second

class Solution {
public:
    void findRotten(vector<vector<int>>& grid, queue<pair<pair<int,int>, int>> &q){
        int n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2) q.push({{i,j}, 0});
            }
        }
    }
    bool check(vector<vector<int>>& grid){
        int n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1) return true;
            }
        }
        return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), res=0;
        queue<pair<pair<int,int>, int>> q;
        findRotten(grid,q);
        while(!q.empty()){
            auto p = q.front(); q.pop();
            int i = p.ff.ff, j = p.ff.ss, time = p.ss;
            
            for(int ii=-1; ii<=1; ii++){
                for(int jj=-1; jj<=1; jj++){
                    if(abs(ii)==abs(jj)) continue;
                    int newi = i+ii, newj = j+jj;
                    if(newi<0 || newj<0 || newi>=n || newj>=m || grid[newi][newj]!=1) 
                        continue;
                    if(grid[newi][newj]==1){
                        q.push({{newi, newj},time+1});
                        grid[newi][newj]=2;
                        res = max(res, time+1);
                    }
                }
            }
        }
        if(check(grid)) return -1;
        return res;
    }
};