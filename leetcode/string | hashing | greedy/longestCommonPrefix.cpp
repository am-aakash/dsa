class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs[0].length();
        
        for(int i=0;i<n;i++){
            char c=strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(strs[j][i]!=c) return ans;
            }
            ans+=c;
        }
        return ans;
    }
};
