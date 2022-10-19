class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& arr) {
        int n = arr.size();
        for(int i=1; i<n; i++) arr[i] += arr[i-1];
        
        vector<int> res;
        int highest = arr[n-1];
        res.push_back(0);
        for(int i=1; i<=n; i++){
            int left = i-arr[i-1], right = arr[n-1]-arr[i-1];
            if(left+right == highest) res.push_back(i);
            else if(left+right > highest){
                highest = left+right;
                res.clear();
                res.push_back(i);
            }
        }
        return res;
    }
};