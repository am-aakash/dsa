class Solution {
public:
    int triangularSum(vector<int>& a) {
        int n=a.size()-1;
        while(n>0){
            for(int i=0;i<n;i++){
                a[i]=(a[i]+a[i+1])%10;
            }
            cout<<a[0]<<" ";
            n--;
        }
        return a[0];
    }
};
