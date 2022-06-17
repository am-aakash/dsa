class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum%2==1) return ans;
        long long temp=2;
        while(true){
            ans.push_back(temp);
            finalSum-=temp;
            if(finalSum==0) break;
            if(finalSum<=temp){
                ans.pop_back();
                ans.push_back(temp+finalSum);
                break;
            }
            temp+=2;
        }
        return ans;
    }
};
