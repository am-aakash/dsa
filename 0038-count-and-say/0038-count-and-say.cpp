class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s = "11";
        if(n==2) return s;
        
        for(int i=3; i<=n; i++){
            string t="";
            s+='&';
            int c=1;
            for(int j=1; j<s.length(); j++){
                if(s[j]!=s[j-1]){
                    t += to_string(c) + s[j-1];
                    c=1;
                }
                else c++;
            }
            s=t;
        }
        return s;
    }
};