class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        int ans=0, sum=0;
        mp[sum]++;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            int x=sum-k;
            if(mp.find(x)!=mp.end()) ans+=mp[x];
            mp[sum]++;
        }
        return ans;
    }
};
