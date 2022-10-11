class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEl = INT_MIN, res = INT_MIN, currSum = 0;
        for(int it: nums){
            if(currSum<0) currSum=0;
            currSum += it;
            maxEl = max(maxEl, it), res = max(res, currSum);
        }
        return max(res, maxEl);
    }
};