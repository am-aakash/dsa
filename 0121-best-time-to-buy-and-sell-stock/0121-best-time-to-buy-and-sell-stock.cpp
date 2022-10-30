class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), res=0, mini=INT_MAX;
        for(int i=0; i<n; i++){
            mini = min(mini, prices[i]);
            res = (prices[i]-mini > res)? prices[i]-mini : res;
        }
        return res;
    }
};