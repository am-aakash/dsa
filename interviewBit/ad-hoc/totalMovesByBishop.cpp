int Solution::solve(int A, int B) {
    int count=min(A-1,8-B) + min(8-B,8-A) + min(8-A,B-1) + min(B-1,A-1);
    return count; 
}
