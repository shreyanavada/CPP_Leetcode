class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count_sub =0 ;
        int count2=0;
        for(int i=0 ;i<nums.size() ;i++)
        {
            count2 =0 ;
            for(int j=i ;j<nums.size() ;j++)
            {
                if(nums[j] == target)
                {
                    count2++;
                   
                    
                }
                 if(count2 > (j-i+1)/2)
                    {
                        count_sub++;
                    }
            }
        }
        return count_sub;
        
    }
};
