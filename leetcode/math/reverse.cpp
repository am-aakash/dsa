class Solution {
public:
    int reverse(int x) {
        bool negetive=false;
        if(x<0) negetive=true;
        while(x!=0 && x%10==0) x/=10;
        vector<int> digits;
        while(x!=0) digits.push_back(x%10),x/=10;
        int n=digits.size()-1;
        long long ans=0;
        for(auto it:digits) ans+=it*pow(10,n)*(negetive?-1:1),n--;
        x = (ans<pow(2,32) && ans<2147483648)? ans*(negetive?-1:1) : 0;
        return x;
    }
};
// Better solution
class Solution {
public:
    int reverse(int x) {
        int y=0;
        while(x){
            if(y>INT_MAX/10 || y<INT_MIN/10) return 0;
            else{
                y=y*10 +x%10;
                x=x/10;
            }
        }
        return y;
    }
};
