class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size(), n0=0,n1=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) n0++;
            else if(a[i]==1) n1++;
        }
        for(int i=0;i<n;i++){
            if(n0>0) a[i]=0,n0--;
            else if(n1>0) a[i]=1,n1--;
            else a[i]=2;
        }
    }
};
