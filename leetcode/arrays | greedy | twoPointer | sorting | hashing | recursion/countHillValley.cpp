class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans=0, tempValley=0, tempHill=0;
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i]>nums[i-1]&&nums[i]>nums[i+1])||(nums[i]<nums[i-1]&&nums[i]<nums[i+1])) ans++;
            else if(nums[i]==nums[i+1] && ((nums[i]>nums[i-1])||(nums[i]==nums[i-1] && tempHill>0))) tempHill++;
            else if(nums[i]==nums[i+1] && ((nums[i]<nums[i-1])||(nums[i]==nums[i-1] && tempValley>0)))  tempValley++;
            else if(nums[i]==nums[i-1]&&nums[i]>nums[i+1] &&(tempHill>0||tempValley>0)) tempValley=0,ans+=tempHill>0?1:0,tempHill=0;
            else if(nums[i]==nums[i-1]&&nums[i]<nums[i+1] &&(tempHill>0||tempValley>0)) tempHill=0,ans+=tempValley>0?1:0,tempValley=0;
        }
        return ans;
    }
};
