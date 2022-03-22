class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int> ans;
        for(int it:a){
            int temp = abs(it)-1;
            a[temp]=-a[temp];
            if(a[temp]>0) ans.push_back(temp+1); // return temp+1 bcz that -> it <- is called second time
        }
        return ans;
    }
};

// TC-> O(n)
// SC-> O(1)
