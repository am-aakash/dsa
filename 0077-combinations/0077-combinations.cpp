class Solution {
public:
    vector<vector<int>> res;
    void helper(int n, int k, vector<int> curr, int i){
        if(curr.size()==k){
            res.push_back(curr);
            return;
        }
        if(i>n || n-i+curr.size()+1<k) return;
        curr.push_back(i);
        helper(n,k,curr,i+1);
        curr.pop_back();
        helper(n,k,curr,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        helper(n,k,{},1);
        return res;
    }
};