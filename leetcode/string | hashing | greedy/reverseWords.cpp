class Solution {
public:
    string reverseWords(string s) {
        // substring -> s.substr(start, end)
        vector<string> ans;
        int start = (s[0]==' ')?1:0;
        string temp="";
        for(auto it:s){
            if(it==' '){
                if(temp.length()>0) ans.push_back(temp);
                temp="";
            }
            else temp+=it;
        }
        ans.push_back(temp);
        string op="";
        for(int i=ans.size()-1;i>=1;i--) if(ans[i].length()>0) op+=ans[i]+((ans[i-1].length()>0)? " ":"");
        op+=ans[0];
        
        return op;
        
    }
};
