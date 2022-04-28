class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum=0;
        for(auto it: piles) pq.push(it), sum+=it;
        
        while(k--){
            int temp=pq.top();
            pq.pop();
            sum = sum - temp/2;
            temp = temp - temp/2;
            pq.push(temp);
        }
        return sum;
    }
};
