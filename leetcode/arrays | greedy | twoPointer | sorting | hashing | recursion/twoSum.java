class Solution {
    public int[] twoSum(int[] nums, int target) {
        int ans[] = new int[2];
        HashSet<Integer> map = new HashSet<>();
        for(int i=0; i<nums.length; i++){
            if(map.contains(target-nums[i])){
                ans[0]=i;
                break;
            }
            map.add(nums[i]);
        }
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target-nums[ans[0]]){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
}
