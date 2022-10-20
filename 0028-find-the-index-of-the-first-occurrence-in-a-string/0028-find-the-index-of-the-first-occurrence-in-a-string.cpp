class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for(int i=0; i<=n-m; i++){
            for(int j=i; j<i+m; j++){
                if(haystack[j]==needle[j-i] && j==i+m-1) return i;
                else if(haystack[j]!=needle[j-i]) break;
            }
        }
        return -1;
    }
};