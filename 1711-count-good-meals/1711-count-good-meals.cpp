class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int count=0;
        map<int,int> mp;
        for(int cur : deliciousness){
            for(int i=1; i<=(1<<22); i*=2){
                if(mp[i-cur]>0) count=(count + mp[i-cur])%(int)(1e9+7);
            }
            mp[cur]++;
        }
        return count;
    }
};