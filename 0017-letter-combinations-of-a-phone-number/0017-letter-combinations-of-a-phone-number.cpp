class Solution {
private:
    vector<string> letters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
public:
    void combinationsUtil(string digits, int i, string curr){
        if(curr.length()==digits.length()){
            res.push_back(curr);
            return;
        }
        string temp;
        for(int k=0; k<(letters[digits[i]-'2'].length()); k++){
            temp = letters[digits[i]-'2'][k];
            combinationsUtil(digits, i+1, curr+temp);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        combinationsUtil(digits, 0, "");
        return res;
    }
};