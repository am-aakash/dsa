class Solution {
public:
    vector<int> suff(vector<int>& nums) {
        vector<int> temp=nums;
        for(int i=temp.size()-2;i>=0;i--) temp[i]*=temp[i+1];
        return temp;
    }
    vector<int> pref(vector<int>& nums) {
        vector<int> temp=nums;
        for(int i=1;i<temp.size();i++) temp[i]*=temp[i-1];
        return temp;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pr=pref(nums), su=suff(nums);
        // for(auto it:pr) cout<<it<<" ";
        // cout<<"\n";
        // for(auto it:su) cout<<it<<" ";
        // cout<<"\n";
        nums[0]=su[1],nums[nums.size()-1]=pr[nums.size()-2];
        for(int i=1;i<nums.size()-1;i++) nums[i]=pr[i-1]*su[i+1];
        return nums;
    }
};
