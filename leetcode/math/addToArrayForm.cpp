vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(), num.end());
        int i=0;
        while(i<num.size()){
            num[i]+=(k>0)? k%10:0;
            k=(k>0)?k/10:0;
            if(num[i]>=10 && i<num.size()-1){
                num[i+1]+=num[i]/10;
                num[i]-=10;
            }
            else if(num[i]>=10 && i==num.size()-1){
                num.push_back(num[i]/10);
                num[i]-=10;
            }
            i++;
        }
        if(k>0){
            while(k>0){
                num.push_back(k%10);
                k/=10;
            }
        }
        reverse(num.begin(), num.end());
        return num;
    }
