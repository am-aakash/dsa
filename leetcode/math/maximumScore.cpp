class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> maxi;
        maxi.push(a), maxi.push(b), maxi.push(c);
        int ans=0;
        while(true){
            a=maxi.top(); maxi.pop();
            b=maxi.top(); maxi.pop();
            if(b==0) break;
            a--,b--,ans++;
            maxi.push(a), maxi.push(b);
        }
        return ans;
    }
};
