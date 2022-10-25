class Solution {
public:
    int reverse(int x) {
        int upperLimit =  (pow(2,31) - 1)/10;
        int lowerLimit = -(pow(2,31)/10);
        int res = 0;
        while(x){
            if(res>=lowerLimit && res<=upperLimit){
                res = res*10 + x%10;
            }
            else return 0;
            x/=10;
        }
        return res;
    }
};