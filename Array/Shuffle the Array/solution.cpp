class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;
        for(int i=0 ; i<n;i++)
        {
            arr1.push_back(nums[i]);
        }
        for(int i=n ;i<2*n ;i++)
        {
            arr2.push_back(nums[i]);
        }
        for(int i=0 ;i<n ;i++)
        {
            ans.push_back(arr1[i]);
            ans.push_back(arr2[i]);
        }
        return ans;
    }
};
