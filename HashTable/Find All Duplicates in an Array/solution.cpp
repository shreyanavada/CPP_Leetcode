class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        vector<int>hash(maxi+1 , 0);
        vector<int>ans;
        for(int i=0 ;i<nums.size() ;i++)
        {
            hash[nums[i]]++;
            if(hash[nums[i]] >1)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
        
    }
};
// Time complexity : O(n)             Space complexity : O(n) . 
