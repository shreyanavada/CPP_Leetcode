class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxi=-1;
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(m.count(-nums[i]))
            {
                if(nums[i]<0)
                {
                    nums[i] = -nums[i];
                }
                if(maxi<nums[i])
                {
                    maxi=nums[i];
                }
            }
            m[nums[i]]=1;
        }
        return maxi;
        
    }
};
