bool checkPowersOfThree(int n) {
        int prev=14, temp;
        while(prev>=0 && n>0){
            temp = pow(3,prev);
            if(n>=temp) n=n-temp;
            prev--;
        }
        if(n>0) return false;
        else return true;
}
