class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int l=0, r=0, n=cards.size(), res=INT_MAX;
        map<int,int> hashmap;
        while(r<n){
            hashmap[cards[r]]++;
            while(hashmap[cards[r]]>1){
                hashmap[cards[l]]--;
                res = min(r-l+1, res);
                l++;
            }
            r++;
        }
        if(res<INT_MAX) return res;
        return -1;
    }
};