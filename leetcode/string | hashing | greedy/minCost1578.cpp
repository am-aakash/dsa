class Solution {
public:
    int minCost(string s, vector<int>& a) {
        int ans=0, maxCost=a[0],maxInd=0;
        vector<int> uniques;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1] && i<s.length()-1){
                if(a[i]>maxCost) maxCost=a[i],maxInd=i;
            }
            else if(s[i]==s[i-1] && i==s.length()-1){
                if(a[i]>maxCost) maxCost=a[i],maxInd=i;
                uniques.push_back(maxInd);
            }
            else if(s[i]!=s[i-1] && i==s.length()-1){
                uniques.push_back(maxInd);
                uniques.push_back(i);
            }
            else{
                uniques.push_back(maxInd);
                maxCost=a[i],maxInd=i;
            }
        }
        for(auto it:uniques) cout<<it<<" ";
        for(int j=0,i=0;j<a.size() ;j++){
            if(i<uniques.size() && j==uniques[i]) i++;
            else ans+=a[j];
        }
        return ans;
    }
};
