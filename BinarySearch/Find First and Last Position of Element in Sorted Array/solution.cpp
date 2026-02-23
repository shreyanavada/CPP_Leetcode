class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        vector<int>ans(2,-1);
        if(high==0 && low==0 && nums[0]==target)
        {
            ans[0]=0;
            ans[1]=0;
        }
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid] == target)
            {
                low = mid;
                high = mid;
                while(low>=0 && nums[low]==target  )
                {
                    low = low-1;
                   
                }
                low= low+1;
                ans[0]=low;
                while(high<nums.size() && nums[high]==target )
                {
                    high = high+1;
                }
                high=high-1;
                ans[1]=high;
                break;
            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }

            
        }
        return ans;
        
    }
};
