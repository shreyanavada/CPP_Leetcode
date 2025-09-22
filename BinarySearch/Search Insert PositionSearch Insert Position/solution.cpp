//using BS algo (lower bound):
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;
        int ans = nums.size(); // if the ele is not found in the given vector then it should return the length of the array itself . 
        int mid;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid] >= target)
            {
                ans = min(ans , mid);
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};
