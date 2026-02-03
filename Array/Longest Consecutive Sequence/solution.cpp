class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        int maxi = 1;
        int k;
        int LongestLen =1;
        sort(nums.begin() , nums.end());
        for(int i=0 ;i<nums.size()-1 ;i++)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }

            k = nums[i]+1;
            if(nums[i+1] == k )
            {
                LongestLen++;
                if(maxi < LongestLen )
                {
                    maxi = LongestLen ;
                }
            }
            else
            {
                LongestLen  = 1;
            }
            
        }
        return maxi ;
    }
};
