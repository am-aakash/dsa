class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0;
        vector<vector<int>> ans;
        
        for(;i<intervals.size() && intervals[i][1]<newInterval[0];i++) ans.push_back(intervals[i]);
        
        if(i<intervals.size()) newInterval[0]=min(newInterval[0], intervals[i][0]);
        
        while(i<intervals.size()){
            if(intervals[i][0]<=newInterval[1]){
                newInterval[1]=max(newInterval[1], intervals[i][1]);
                i++;
            }
            else break;
        }
        ans.push_back(newInterval);
        
        for(;i<intervals.size(); i++) ans.push_back(intervals[i]);
        
        return ans;
    }
};
