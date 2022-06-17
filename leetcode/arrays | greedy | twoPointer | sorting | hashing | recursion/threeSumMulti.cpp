class Solution {
public:
    int threeSumMulti(vector<int>& arr, int x) {
        unordered_map<int,long> hash;
        long long int ans=0;
        for(auto it: arr) hash[it]++;
        
        for(auto it1:hash){
            for(auto it2: hash){
                int i=it1.first, j=it2.first, k=x-i-j;
                if(!hash.count(k)) continue;
                
                if(i==j && j==k){
                    ans+= ( hash[i]*(hash[j]-1)*(hash[k]-2) )/6;
                }
                else if(i==j && j!=k){
                    ans+= ( hash[i]*(hash[j]-1) )/2 * hash[k];
                }
                else if(i<j && j<k){
                    ans+= hash[i] * hash[j] * hash[k];
                }
                ans %= (int)(1e9 + 7);
            }
        }
        return ans % (int)(1e9 + 7);
    }
};
