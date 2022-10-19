class Solution {
private:
    int n, m;
    vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
public:
    bool isValid(int i, int j){
        if(i<0 || i>=n || j<0 || j>=m) return false;
        return true;
    }
    void markLand(vector<vector<int>>& grid, int i, int j){
        if(!isValid(i,j) || grid[i][j]==1) return;
        grid[i][j]=1;
        for(vector<int> dir: dirs){
            markLand(grid, i+dir[0], j+dir[1]);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++){
            int j=0;
            markLand(grid, i, j);
            j=m-1;
            markLand(grid, i, j);
        }
        for(int j=0; j<m; j++){
            int i=0;
            markLand(grid, i, j);
            i=n-1;
            markLand(grid, i, j);
        }
        
        int res = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==0){
                    res++;
                    markLand(grid, i, j);
                }
            }
        }
        
        return res;
    }
};