class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int maxSum = INT_MIN, minSum = INT_MAX, curr1 = 0, curr2 = 0;
        for(int el: arr){
            if(curr1<0) curr1=0;
            if(curr2>0) curr2=0;
            curr1+=el, curr2+=el;
            maxSum = max(maxSum, curr1);
            minSum = min(minSum, curr2);
        }
        
        return max(maxSum, abs(minSum));
    }
};