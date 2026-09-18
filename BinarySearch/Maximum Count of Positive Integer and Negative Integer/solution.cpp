class Solution {
public:
    int BS_neg(vector<int>& nums )
    {
        int max_neg=0;
        int low = 0 , high = nums.size()-1;
        while(low <= high)
        {
            int mid = (low+high)/2;

            if(nums[mid] < 0)
            {
                max_neg = (mid-0+1);
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return max_neg;
    }
    int BS_pos(vector<int>&nums )
    {
        int max_pos=0;
         int low = 0 , high = nums.size()-1;
        while(low <= high)
        {
            int mid = (low+high)/2;

            if(nums[mid] > 0)
            {
                max_pos = ((nums.size()-1)-mid+1);
                high = mid-1;
            }
            else
            {
               low = mid+1;
            }
        }
        return max_pos;
    }

    int maximumCount(vector<int>& nums) {
        
        int max_neg = BS_neg(nums);
        int max_pos = BS_pos(nums);
        return max(max_pos ,max_neg);
    }
};
