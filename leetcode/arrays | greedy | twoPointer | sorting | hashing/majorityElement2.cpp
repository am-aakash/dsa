class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        vector<int> ans;
        int num1=INT_MIN, num2=INT_MIN, n=a.size(), cnt1=0, cnt2=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==num1) cnt1++;
            else if(a[i]==num2) cnt2++;
            else if(cnt1==0) num1=a[i], cnt1++;
            else if(cnt2==0) num2=a[i], cnt2++;
            else cnt1--, cnt2--;
        }
        
        cnt1=0,cnt2=0;
        // check if cnts are >n/3
        for(auto it:a){
            if(it==num1) cnt1++;
            if(it==num2) cnt2++;
        }
        if(cnt1>n/3) ans.push_back(num1);
        if(cnt2>n/3) ans.push_back(num2);
        return ans;
    }
};
