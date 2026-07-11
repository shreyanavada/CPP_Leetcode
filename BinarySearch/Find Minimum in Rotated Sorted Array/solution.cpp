class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size()-1 ;
        int mid;
        int min_ele = INT_MAX;
        while(low <= high)
        {
            mid = (low+high)/2;
            if(nums[mid] <= nums[high])
            {
                min_ele = min( min_ele ,nums[mid]);
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return min_ele;
    }
};
