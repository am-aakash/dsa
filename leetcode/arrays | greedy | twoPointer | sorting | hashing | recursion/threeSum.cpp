class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3) return {};
        vector<vector<int>> ret;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;++i){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int tar = 0 - nums[i], hi=nums.size()-1,lo=i+1;
            
            while(hi>lo){
                int summ = nums[hi]+nums[lo];
                if(summ > tar) hi--;
                else if(summ < tar) lo++;
                else{
                    ret.push_back({nums[i],nums[lo],nums[hi]});
                    lo++,hi--;
                    while(hi>lo && nums[hi]==nums[hi+1]) hi--;
                    while(hi>lo && nums[lo]==nums[lo-1]) lo++;
                }    
            }
        }
        return ret;
    }
};
