class Solution {
public:
    int totalFruit(vector<int>& a) {
        int ans=1,freq=1,last=a[0],secondLast=a[0],lastFreq=1;
        for(int i=1;i<a.size();i++){
            if(a[i]==last) freq++, lastFreq++;
            else if(a[i]==secondLast) freq++, lastFreq=1, secondLast=last, last=a[i];
            else freq=lastFreq+1, secondLast=last, last=a[i], lastFreq=1;
            ans=max(ans,freq);
        }
        return ans;
    }
};
