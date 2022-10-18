class Solution {
public:
    void dfs(vector<vector<int>>& rooms, int i, set<int>& vis){
        if(vis.find(i)!=vis.end()) return;
        vis.insert(i);
        for(auto it: rooms[i]){
            dfs(rooms, it, vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int siz = rooms.size();
        set<int> vis;
        dfs(rooms, 0, vis);
        if(vis.size()==siz) return true;
        return false;
    }
};