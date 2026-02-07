class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int LongestSubarray = 1; 
        int maxi = 1;
        for( int i=0 ;i<nums.size()-1 ;i++)
        {
            if(nums[i] < nums[i+1])
            {
                LongestSubarray++;
                if(maxi < LongestSubarray)
                {
                    maxi = LongestSubarray ;
                }
            }
            else
            {
                LongestSubarray =1;
            }
        }
        return maxi ;
    }
};
