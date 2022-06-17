class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size();
        int ind1=-1,ind2=n-1;
        
        // ind1 -> first index with a[i]<a[i+1] from backwards
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                ind1=i;
                break;
            }
        }
        // ind1 =-1 if its last permutation
        if(ind1>=0){
            //ind2 -> first index with greater value than a[ind] from backwards
            for(int i=n-1;i>ind1;i--){
                if(a[i]>a[ind1]){
                    ind2=i;
                    break;
                }
            }
            
            // swap
            swap(a[ind1],a[ind2]);
        }
        
        // reverse from ind1+1 to last
        int i=ind1+1,j=n-1;
        while(i<j){
            swap(a[i],a[j]);
            i++,j--;
        }
    }
};
