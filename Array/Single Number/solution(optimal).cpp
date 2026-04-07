class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_ele = 0;
        for(int i=0 ; i<nums.size() ;i++)
        {
            xor_ele ^= nums[i];
        }
        return xor_ele;
        
    }
};
