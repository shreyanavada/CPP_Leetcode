class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin() ,nums.end());
        vector<vector<int>>ans;
        vector<int>arr;
        int diff;
        for(int i=0 ;i<nums.size() ;i++)
        {
            arr.push_back(nums[i]);
            if(arr.size() == 3)
            {
                diff = arr[2] - arr[0];
                if(diff <= k)
                {
                    ans.push_back(arr);
                    arr.clear();
                }
                else
                {
                    return {};
                }
            }
        }
        return ans;
    }
};
