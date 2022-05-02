class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(auto it: s){
            m[it]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto it: m) pq.push({it.second, it.first});
        
        string ans="";
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            for(int i=0;i<it.first; i++) ans+=it.second;
        }
        return ans;
    }
};
