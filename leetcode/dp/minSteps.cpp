class Solution {
public:
    int dp[1001][1001];
    
    int minKeyPress(int step, int value, int copy, int&n)
    {
        if(step>n || value>n) return INT_MAX;
        
        if(value==n) return step;
        
        if(dp[step][value]!=-1) return dp[step][value];
        
        // return min step to reach the target value
        // there are 2 choices: paste copied value with current value => 1 step
        // copy current value and paste it with itself => 2 step
        return dp[step][value] = min(minKeyPress(step+1,value+copy,copy,n),minKeyPress(step+2,2*value,value,n));
    }
    
    int minSteps(int n) {
        if(n==1) return 0;
        memset(dp,-1,sizeof(dp));
        
        // start with value 1 and copy 1 and intial step 1 (assuming we already copied the intial value 'A')
        return minKeyPress(1,1,1,n);
    }
};
