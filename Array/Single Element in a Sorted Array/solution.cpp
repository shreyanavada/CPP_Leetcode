class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int p1=0;
        if(nums.size() == 1)
        {
            return nums[0];
        }
        while(p1<nums.size()-1)
        {
            if(nums[p1]==nums[p1+1])
            {
                p1 += 2;
            }
            else
            {
                return nums[p1];
            }
        }
        return nums[p1];
        
    }
};
