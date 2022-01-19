class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int p1 = 0, p2 = 0, count = 0;
        boolean first = true;
        int[] tmp = new int[nums1.length >= nums2.length ? nums1.length : nums2.length], res;
    
        while(p1 < nums1.length && p2 < nums2.length) {
            if(nums1[p1] == nums2[p2]) {
                tmp[count++] = nums1[p1];
                p1++;
                p2++;    
            } else if(nums1[p1] < nums2[p2]) {
                p1++;
            } else {
                p2++;
            }
        }
    
        res = new int[count];
        for(int i=0; i<count; i++) res[i] = tmp[i];
        return res;
    }
}
