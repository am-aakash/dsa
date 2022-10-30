class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int l = 0, r = 0, n = s.length(), res=0;
        map<char,int> hashMap;
        while(r<n){
            hashMap[s[r]]++;
            while(hashMap[s[r]]>1){
                hashMap[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};