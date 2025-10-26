class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        vector<int> oddArr;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                ans.push_back(nums[i]);
            }
            else{
                 oddArr.push_back(nums[i]);
            }
        }
        
        for ( int i = 0; i < oddArr.size(); i++)
        {
             ans.push_back(oddArr[i]);
        }
        return ans;
    }
};
