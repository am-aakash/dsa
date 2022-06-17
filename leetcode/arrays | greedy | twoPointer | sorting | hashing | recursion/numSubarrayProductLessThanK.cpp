class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        if(k<=1) return 0;
        int it=0, p=1, ans=0;
        for(int i=0;i<a.size() && it<a.size();i++){
            p*=a[i];
            while(p>=k){
                p/=a[it];
                it++;
            }
            ans+=i-it+1;
        }
        return ans;
    }
};
