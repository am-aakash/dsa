string convertToBase7(int num)
    {
        string ans = "";
        if (num == 0) return "0";
        bool negetive = num < 0;
        num = abs(num);
        while (num){
            ans = to_string(num % 7) + ans;
            num /= 7;
        }
        return ( negetive? "-" + ans : ans);
    }
};
// https://leetcode.com/problems/base-7/