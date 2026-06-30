class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while( k > 0)
        {
            int mini = *min_element(nums.begin() , nums.end());
            for(int i=0 ;i<nums.size() ;i++)
            {
                if(mini == nums[i])
                {
                    nums[i] = nums[i]*multiplier;
                    k--;
                    break;
                }
            }
        }
        return nums;
    }
};
