class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = nums[0]+nums[1]+nums[2], n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int it1=i+1,it2=n-1;
            while(it1<it2){
                int temp = nums[i]+nums[it1]+nums[it2];
                if(abs(temp-target) < abs(ans-target)) ans=temp;
                if(temp>target) it2--;
                else if(temp<target) it1++;
                else return target;
            }
        }
        return ans;
    }
};
