class Solution {
public:
    int partitionArray(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int ans=1, prev=a[0];
        
        for(int i=1;i<a.size();i++){
            if(a[i]<=prev+k) continue;
            ans++;
            prev=a[i];
        }
        return ans;
    }
};