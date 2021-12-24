vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for(int i=2;i<=n;i++){
            string temp="";
            for(int j=1;j<i;j++){
                bool pause=false;
                for(int t=2; t<=min(i/2,j/2) ; t++) if(i%t==0 && j%t==0) pause=true;
                if(pause || (i%j==0 && j!=1)) continue;
                temp = to_string(j);
                temp += "/";
                temp += to_string(i);
                ans.push_back(temp);
            }
        }
        return ans;
    }
