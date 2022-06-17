class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0, maxNeg=INT_MIN, max=INT_MIN;
        for(int it:a){
            sum+=it, maxNeg=(it>=0)?0:(it>maxNeg)?it:maxNeg;
            max=(sum>max)? sum:max;
            if(sum<0) sum=0;
        }
        return (maxNeg<0)? maxNeg:max;
    }
};
