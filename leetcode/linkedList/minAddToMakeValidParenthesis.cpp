class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cnt=0;
        
        for(auto it:s){
            if(it==')'){
                if(st.empty()) cnt++;
                else if(st.top()=='(') st.pop();
                else st.push(it);
            }
            else if(it=='('){
                st.push(it);
            }
        }
        return st.size() + cnt;
    }
};
