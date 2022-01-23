class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0) return -1;
        if(nums.size()==1) return (nums[0]==target)? 0:-1;
        int l1=0,l2=0,r1=nums.size()-1,r2=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                l2=i+1,r1=i;
            }
        }
        while(r1>=l1){
            int mid=l1+(r1-l1)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) r1=mid-1;
            else l1=mid+1;
        }
        while(r2>=l2){
            int mid=l2+(r2-l2)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) r2=mid-1;
            else l2=mid+1;
        }
        return -1;
    }
};
