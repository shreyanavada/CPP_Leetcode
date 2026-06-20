class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int count =0 ;
        vector<int>ans;
        int p1 = 0 ,p2 =0 ;
        while(p2<nums.size())
        {
            if(nums[p1] == nums[p2])
            {
                count++;
                if(count<=k)
                {
                    ans.push_back(nums[p1]);
                }
                p2++;
            }
            else
            {
                count=0;
                p1=p2;
            }
        }
        return ans;
        
    }
};
