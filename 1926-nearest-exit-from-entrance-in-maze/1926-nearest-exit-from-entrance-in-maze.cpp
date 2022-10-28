class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        //current moves
        int moves=1;
        int rows=maze.size();
        int cols=maze[0].size();
        
        //to move in all directions
        vector<vector<int>> dirs ={{0,1},{1,0},{0,-1},{-1,0}};
        
        queue<pair<int,int>> q;
        q.push({e[0],e[1]}); // push the enterance in queue
        maze[e[0]][e[1]]='+'; //mark the entrance  as visited
        
        while(!q.empty()){
            int l = q.size();
            for(int k=0; k<l; k++){
                auto [i,j] = q.front(); q.pop();

                for(auto dir: dirs){
                    int x = i + dir[0], y = j + dir[1];

                    if(x<0 || y<0 || x>=rows || y>=cols || maze[x][y]=='+') continue;

                    //if we have reached the exit then current moves are the min moves to reach the exit
                    if(x==0 || y==0 || x==rows-1 || y==cols-1) return moves;

                    //block the cell as we have visited
                    maze[x][y]='+';
                    q.push({x,y});
                }
            }
            moves++;
        }
        return -1;
    }
};