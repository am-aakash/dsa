class Solution {
public:
    int maxProduct(vector<int>& a) {
        int maxi=INT_MIN, temp=1, temp2=1;
        for(auto it: a){
            temp=temp*it;
            maxi=max(maxi,temp);
            if(temp==0) temp=1;
        }
        for(int i=a.size()-1;i>=0;i--){
            temp2=temp2*a[i];
            maxi=max(maxi,temp2);
            if(temp2==0) temp2=1;
        }
        return maxi;
    }
};
