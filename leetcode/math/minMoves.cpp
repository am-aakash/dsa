class Solution {
public:
    int minMoves(vector<int>& a) {
        sort(a.begin(), a.end());
        int ans=0;
        for(auto it:a) ans+=it-a[0];
        return ans;
    }
};
