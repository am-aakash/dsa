class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor1=0, xor2=0;
        
        // Step 1 - Xor all elements of array
        // Xor1 = 1 ⊕ 2 ⊕ 1 ⊕ 3 ⊕ 2 ⊕ 5 = 6
        // To verify, calculate a ⊕ b = 3 ⊕ 5 = 6 which is equal to Xor1

        for(int it: nums) xor1^=it;
        
        // Step 2 - finding the lowest set bit in Xor1
        // The lowest set-bit in Xor1 (110) is 2nd bit.
        int i=0;
        for(;i<32;i++){
            if(xor1 & 1<<i){
                break;
            }
        }
        
        // Step 3 - Xor-ing all elements having ith bit set
        // We Xor all elements having 2nd bit set.
        // So, Xor2 = 2 ⊕ 3 ⊕ 2 = 3
        // So, we get one of the number occuring exactly once - 3
        for(int it: nums){
            if(it & 1<<i) xor2^=it;
        }
        
        // We get the 2nd number by doing Xor1 ⊕ Xor2 = 6 ⊕ 3 = 5
        return {xor1^xor2, xor2};
    }
};