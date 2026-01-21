class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n-1)
        {
            if(nums[i]%2==0 && nums[i+1]%2!=0 || nums[i]%2!=0 && nums[i+1]%2==0)
            {
                i++;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};
