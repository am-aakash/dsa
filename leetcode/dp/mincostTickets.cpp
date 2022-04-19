class Solution {
public:
    int mincostTicketsHelper(vector<int>& days, vector<int>& costs, int i, vector<bool> map, vector<int>& dp) {
        if(i > 365) return 0;
        if(dp[i]!=-1) return dp[i];
        
        // if not day of travel, check next day i+1
        if(!map[i]) return dp[i] = mincostTicketsHelper(days, costs, i+1, map, dp);
        
        return dp[i] = min({
            costs[0] + mincostTicketsHelper(days, costs, i+1, map, dp),
            costs[1] + mincostTicketsHelper(days, costs, i+7, map, dp),
            costs[2] + mincostTicketsHelper(days, costs, i+30, map, dp)
        });
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector <bool> map(366, false);
        vector <int> dp(366, -1);
        
        for(auto x: days) map[x] = true; 
        // mark the travelling days true ***
        
        int x = mincostTicketsHelper(days, costs, 0, map, dp);
        return x;
    }
};
