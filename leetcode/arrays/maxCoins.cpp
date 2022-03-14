class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i=0,j=piles.size()-2,ans=0;
        while(i<j){
            ans+=piles[j];
            i++,j-=2;
        }
        return ans;
    }
};
