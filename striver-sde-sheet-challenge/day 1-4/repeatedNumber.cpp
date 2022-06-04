vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ans,hash(A.size()+1,0);
    int a,b;
    for(auto it:A) hash[it]++;
    for(int i=1;i<hash.size();i++){
        if(hash[i]==0) b=i;
        if(hash[i]==2) a=i;
    }
    ans.push_back(a), ans.push_back(b);
    return ans;
}
