class Solution {
public:
    string intToRoman(int num) {
        string ans;
        while(num/1000>=1) num-=1000,ans+="M";
        if(num>=900) ans+="CM",num-=900;
        else if(num<900 && num>=500) num-=500, ans+="D";
        
        if(num>=400 && num<500) ans+="CD",num-=400;
        
        while(num/100>=1) num-=100,ans+="C";
        if(num>=90) ans+="XC",num-=90;
        else if(num<90 && num>=50) num-=50, ans+="L";
        
        if(num>=40 && num<50) ans+="XL",num-=40;
        
        while(num/10>=1) num-=10,ans+="X";
        if(num>=9) ans+="IX",num-=9;
        else if(num<9 && num>=5) num-=5, ans+="V";
        
        if(num==4) ans+="IV", num-=4;
        else while(num) ans+="I",num--;
        
        return ans;
    }
};
