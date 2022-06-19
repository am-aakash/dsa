int Solution::maxArr(vector<int> &A) {
    int maxi(INT_MIN/2) , mini(INT_MAX/2) , maxi2(INT_MIN/2) , mini2(INT_MAX/2);
    
    for(int i=0;i<A.size();i++){
        maxi = max(maxi,A[i]+i);
        mini = min(mini,A[i]+i);
        
        maxi2 = max(maxi2, A[i]-i);
        mini2 = min(mini2, A[i]-i);
    }
    return max( maxi-mini , maxi2-mini2);
}
