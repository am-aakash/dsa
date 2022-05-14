class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int cnt[61] = {0};
        int ans=0;
        for(auto it: time){
                                        // if it = 40
            int temp=it%60;             // temp = 40
            if(temp==0) ans+=cnt[0];    
            else ans+=cnt[60-temp];     // ans+=cnt[20]
            
            cnt[temp]++;                // cnt[40]++ s.t. if 20 is found next, it increases ans
        }
        return ans;
    }
};
