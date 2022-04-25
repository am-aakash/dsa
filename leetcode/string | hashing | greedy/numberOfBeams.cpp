class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0, prev=0, curr=0;
        
        for(auto it: bank){
            for(auto i: it){
                if(i=='1') curr++;
            }
            ans+=prev*curr;
            if(curr==0) continue;
            prev=curr, curr=0;
        }
        return ans;
    }
};
