class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> maxHeap;
        unordered_map<int,int> hash;
        for(auto it: a) hash[it]++;
        
        for(auto it: hash) maxHeap.emplace(it.second, it.first);
        
        while(k--){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
    }
};
