class Solution {
public:
    int minimumDeletions(vector<int>& a) {
        int n=a.size(), mini=INT_MAX, idxMin, maxi=INT_MIN, idxMax;
        
        for(int i=0;i<n;i++){
            if(a[i]>maxi) maxi=a[i],idxMax=i;
            if(a[i]<mini) mini=a[i],idxMin=i;
        }
        int ans = min({idxMax+1 + n-idxMin, n-min(idxMin,idxMax), max(idxMin,idxMax)+1, n-idxMax + idxMin+1});
        return ans;
    }
};
