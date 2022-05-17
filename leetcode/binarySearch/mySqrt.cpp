class Solution {
public:
    int mySqrt(int x) {
        int l=1, r=x/2;
        if(x<=1) return x;
        if(x>=10000) r=x/100;
        if(x>=1000000) r=x/1000;
        if(x>=100000000) r=x/10000;
        while(l<=r){
            long long mid = (r-l)/2 + l;
            if(mid*mid<=x and (mid+1)*(mid+1)>x) return mid;
            if(mid*mid<x) l=mid+1;
            else r=mid-1;
        }
        return 0;
    }
};
