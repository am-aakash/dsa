vector<vector<int> > Solution::prettyPrint(int A) {
    vector<vector<int>> op((2*A)-1,vector<int> ((2*A)-1));
    int end=2*A-2;
    for(int i=0;i<2*A-1;i++){
        for(int j=0;j<2*A-1;j++){
            int minI=min(i,end-i), minJ=min(j,end-j);
            op[i][j]= A-(min(minI,minJ));
        }
    }
    return op;
}
