class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        int n=nums.size();
        if(n==1) return 0;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]<nums[mid+1]) l=mid+1;
            else r=mid;
        }
        return l;
    }
};
