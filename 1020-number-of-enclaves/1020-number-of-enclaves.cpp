class Solution {
private:
    int n, m;
    vector<vector<int>> dirs = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
public:
    void dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!=1) return;
        grid[i][j]=0;
        for(auto dir : dirs){
            dfs(grid, i+dir[0], j+dir[1]);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++){
            int j=0;
            if(grid[i][j]==1) dfs(grid, i, j);
            j=m-1;
            if(grid[i][j]==1) dfs(grid, i, j);
        }
        for(int j=0; j<m; j++){
            int i=0;
            if(grid[i][j]==1) dfs(grid, i, j);
            i=n-1;
            if(grid[i][j]==1) dfs(grid, i, j);
        }
        int res = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1) res++;
            }
        }
        return res;
    }
};