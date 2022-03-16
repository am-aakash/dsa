/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. 
Once you pay the cost, you can either climb one or two steps.
You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.

eg.
Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.
*/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[1001], n=cost.size();
        dp[0]=cost[0],dp[1]=cost[1];
        for (int i=2;i<=cost.size();i++) dp[i] = min(dp[i-1], dp[i-2]) + (i==n? 0:cost[i]);
        return dp[n];
    }
};
