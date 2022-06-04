class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size(), major=0, cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0) major=a[i],cnt++;
            else if(major==a[i]) cnt++;
            else cnt--;
        }
        return major;
    }
};
