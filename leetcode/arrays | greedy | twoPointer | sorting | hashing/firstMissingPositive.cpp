class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        vector<int> v(500002,0);
        for(auto it:a) if(it<500001 && it>0) v[it]++;
        for(int i=1;i<=500000;i++) if(v[i]==0) return i;
        return 500001;
    }
};
