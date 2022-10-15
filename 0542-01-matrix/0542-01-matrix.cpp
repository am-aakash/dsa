class Solution {
private:
    int n, m;
    int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
    vector<vector<int>> vis, dist;
    queue<pair<pair<int,int>, int>> q;
    
public:
    bool checkRow(int i){
        if(i<0 || i>=n) return false;
        return true;
    }
    bool checkCol(int j){
        if(j<0 || j>=m) return false;
        return true;
    }
    void add0s(vector<vector<int>>& mat){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0){
                    dist[i][j] = 0;
                    vis[i][j] = 1;
                    q.push({{i,j},0});
                }
                else vis[i][j]=0;
            }
        }
    }
    void bfs(vector<vector<int>>& mat){
        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int lvl = q.front().second;
            q.pop();
            dist[i][j]=lvl;
            
	        for(int k=0;k<4;k++){
	            int x=i+dx[k];
	            int y=j+dy[k];
	            if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==0){
	                vis[x][y]=1;
	                q.push({{x,y},lvl+1});
	            }
	        }
        }
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        n = mat.size(), m = mat[0].size();
        vis = dist = vector<vector<int>> (n, vector<int> (m, 0));
        add0s(mat);
        bfs(mat);
        return dist;
    }
};