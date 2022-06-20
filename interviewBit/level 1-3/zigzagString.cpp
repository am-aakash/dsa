string Solution::convert(string A, int B) {
    int n = A.size();
    if(B==1 || B >= n) return A;
    string ans = "";
   
    int inc = 2*(B-2) + 2;
    for(int i=0; i<n; i += inc) ans += A[i];

    for(int k=1; k < B-1; k++){
        for(int i=0; i < n+inc; i += inc){
            if(i-k > 0 && i-k < n) ans += A[i-k];
            if(i+k < n) ans += A[i+k];
        }
    }
    for(int i = B-1; i<n; i += inc) ans += A[i];

    return ans; 
}
