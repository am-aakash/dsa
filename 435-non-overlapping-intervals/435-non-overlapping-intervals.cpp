class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int l=intervals[0][1], r, cnt=0;
        for(r=1;r<intervals.size();r++){
            if(intervals[r][0]>=l) l=intervals[r][1];
            else cnt++, l=min(l, intervals[r][1]);
        }
        return cnt;
    }
};