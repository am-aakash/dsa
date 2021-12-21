int arraySign(vector<int>& nums) {
        int negetives=0;
        for(auto it:nums){
            if(it==0) return 0;
            if(it<0) negetives++;
        }
        if(negetives%2) return -1;
        else return 1;
}
