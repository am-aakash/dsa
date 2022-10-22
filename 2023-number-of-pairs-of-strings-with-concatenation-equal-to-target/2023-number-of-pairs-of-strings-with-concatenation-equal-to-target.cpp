class Solution {
public:
    string frontDiff(string s, string target){ // s="345", target="12345"
        return target.substr(0, target.length()-s.length());
    }
    string backDiff(string s, string target){
        return target.substr(s.length(), target.length()-s.length());
    }
    bool checkIfFront(string s, string target){
        if(s.length()>=target.length()) return false;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=target[i]){
                return false;
            }
        }
        return true;
    }
    bool checkIfBack(string s, string target){
        if(s.length()>=target.length()) return false;
        for(int i=0; i<s.length(); i++){
            if(s[s.length()-i-1]!=target[target.length()-i-1]){
                return false;
            }
        }
        return true;
    }
    int numOfPairs(vector<string>& nums, string target) {
        map<string, int> mp;
        int res = 0;
        for(string s: nums){
            if(!checkIfFront(s, target) && !checkIfBack(s, target)) continue;
            if(checkIfFront(s, target)){
                if(mp[backDiff(s, target)] > 0) res += mp[backDiff(s, target)];
            }
            if(checkIfBack(s, target)){
                if(mp[frontDiff(s, target)] > 0) res += mp[frontDiff(s, target)];
            }
            mp[s]++;
        }
        return res;
    }
};