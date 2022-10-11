class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int res = INT_MIN, forw = 1, backw = 1, n = arr.size();
        for(int i=0; i<n; i++){
            if(forw==0) forw=1;
            if(backw==0) backw=1;
            forw *= arr[i];
            backw *= arr[n-i-1];
            res = max({res, forw, backw});
        }
        return res;
    }
};