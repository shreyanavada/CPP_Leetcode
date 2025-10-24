class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i = 0;
        int j = i+1;
        int n = nums.size();
        vector<int>ans;
      
        while(i <= n-2 && j <= n-1)
        {
            while(nums[i] > 0)
            {
                ans.push_back(nums[j]);
                nums[i] --;
            }
            i = i+2;
            j = j+2;
        }
        return ans;
    }
};
