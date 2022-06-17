class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        vector<int> hash(100001,0);
        for(auto it:arr) hash[it]++;
        sort(hash.begin(),hash.end(), greater<int>());
        
        int ans=0, sum=0;
        for(auto it:hash){
            sum+=it;
            ans++;
            if(sum>=n/2) break;
        }
        return ans;
    }
};
