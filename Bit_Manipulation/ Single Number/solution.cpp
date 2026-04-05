class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int>m;
        for(int i=0 ;i<nums.size() ;i++)
        {
            m[nums[i]]++;
        }
        for(int x:nums)
        {
            if(m[x]==1)
            {
                return x;
            }
        }
        return 0;
    }
};
