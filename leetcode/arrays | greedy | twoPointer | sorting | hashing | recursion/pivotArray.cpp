class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int pivot) {
        int n=a.size(), less=0;
        vector<int> ans(n);
        for(auto it: a) if(it<=pivot) less++;
        int i=0, j=0, k=less;
        while(j<n){
            if(a[j]<pivot) ans[i]=a[j], i++, j++;
            else if(a[j]>pivot) ans[k]=a[j], k++, j++;
            else j++;
        }
        while(i<less) ans[i]=pivot, i++;
        return ans;
    }
};