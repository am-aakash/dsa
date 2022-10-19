class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& arr) {
        int n = arr.size();
        map<int, vector<int>> mpp;
        
        for(int i=1; i<n; i++){
            arr[i] += arr[i-1];
        }
        int highest = arr[n-1];
        mpp[highest].push_back(0);
        for(int i=1; i<=n; i++){
            int left = i-arr[i-1], right = arr[n-1]-arr[i-1];
            if(left+right > highest) highest = left+right;
            mpp[left+right].push_back(i);
        }
        return mpp[highest];
    }
};