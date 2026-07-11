class Solution {
public: 
// Woaaaahhhhh i just solves the question on BS which i left days ago cuz of its high logic ; 
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return 0;
        }
        int low =0 , high = nums.size()-1 ;
        int mid ;
        while(low <= high)
        {
            mid = (low+high)/2 ;
            if(mid == 0)
            {
                if(nums[mid]> nums[mid+1])
                {
                    return mid ;
                }
            }
            else if(mid == nums.size()-1)
            {
                if(nums[mid]> nums[mid-1])
                {
                    return mid ;
                }

            }

            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])
            {
                return mid ;
            }
            else if(nums[mid] < nums[mid+1])
            {
                low = mid+1;
            }
            else
            {
                high = mid -1;
            }
        }
        return mid ;
        
    }
};
