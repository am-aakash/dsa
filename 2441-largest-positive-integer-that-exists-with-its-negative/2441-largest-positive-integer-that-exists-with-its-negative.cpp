class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> s;
        int res = -1;
        for(auto it: nums){
            if(s.find(-1*it)!=s.end() && abs(it)>res) res = abs(it);
            s.insert(it);
        }
        return res;
    }
};