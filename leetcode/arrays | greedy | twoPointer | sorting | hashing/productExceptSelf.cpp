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

// Better Solution O(N) 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int i=0,j=n-1,left=1,right=1;
        while(i<n && j>-1){
            ans[i]*=left;
            ans[j]*=right;
            left*=nums[i],right*=nums[j];
            i++,j--;
        }
        return ans;
    }
};
