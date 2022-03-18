class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> a=height;
        int max=0,i=0,j=height.size()-1;
        while(i<j){
            if(min(a[i],a[j])*(j-i) > max) max=min(a[i],a[j])*(j-i);
            (a[i]==min(a[i],a[j]))? i++:j--;
        }
        return max;
    }
};
