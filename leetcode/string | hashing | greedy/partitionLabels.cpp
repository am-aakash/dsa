vector<int> partitionLabels(string s) {
        vector<int> ans, hash (26, 0);
        vector<char> temp;
        int prev = -1;
        for(auto it : s) hash[it-'a']++;
        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']--;
            temp.push_back(s[i]);
            if(hash[s[i]-'a']==0){
                int cnt=0;
                for(auto it: temp) cnt+=hash[it-'a'];
                if(cnt==0){
                    temp.clear();
                    ans.push_back(i-prev);
                    prev=i;
                }
            }
        }
        return ans;
}
