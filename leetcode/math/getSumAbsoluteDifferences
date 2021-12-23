vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
    int n= nums.size();
    vector<int> prev(n), res(n);
    prev[0]=0;
    int sum = nums[0];
    for(int i=1;i<n;i++){
        sum += nums[i];
        prev[i]= nums[i-1]+prev[i-1];
    }
    for(int i=0;i<n;i++) res[i] = sum - (2*prev[i])+ (nums[i]*(2*i - n));
    return res;
}
