class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
            return false;
        }
        sort(nums.begin() , nums.end());
        for(int i=0 ;i<nums.size();i++)
        {
            if(i==0)
            {
                if(nums[i]==nums[i+1])
                {
                    return true;
                }
            }
            else if(i==nums.size()-1)
            {
                if(nums[nums.size()-1]==nums[nums.size()-2])
                {
                    return true;
                }
            }
            else
            {
                if(nums[i]==nums[i+1])
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};
