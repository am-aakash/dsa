class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int l=0, r=nums.size()-1;
        while(r>=l){
            int mid = l+(r-l)/2;
            if(nums[mid]==target && (mid==0||nums[mid-1]<target)){
                ans.push_back(mid);
                break;
            }
            else if(nums[mid]<target) l=mid+1;
            else if(nums[mid]>=target) r=mid-1;
        }
        l=0, r=nums.size()-1;
        while(r>=l){
            int mid = l+(r-l)/2;
            if(nums[mid]==target && (mid==nums.size()-1||nums[mid+1]>target)){
                ans.push_back(mid);
                break;
            }
            else if(nums[mid]<=target) l=mid+1;
            else if(nums[mid]>target) r=mid-1;
        }
        if(ans.size()) return ans;
        ans.push_back(-1);ans.push_back(-1);
        return ans;
    }
};
