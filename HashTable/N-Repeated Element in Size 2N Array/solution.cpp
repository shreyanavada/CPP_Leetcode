class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2 ;
      int maxi = *max_element(nums.begin(), nums.end());
        vector<int>arr(maxi+1,0);
        {
            for(int i=0 ;i<nums.size() ;i++)
            {
                arr[nums[i]]++;
                if(arr[nums[i]]==n)
                {
                    return nums[i];
                }
            }
        }
        return 0;
    }
};
