class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int>anss;
        for(int i=0 ;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0 ; i<nums.size();i++)
        {
            int ans = target - nums[i];
            
            if(m.count(ans) && m[ans]!=i)
            {
                anss.push_back(i);
                anss.push_back(m[ans]);
                return anss;
            }
        }
        
        
    }
};
