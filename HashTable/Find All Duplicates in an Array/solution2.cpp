class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        int p1=0 , p2 =1 ;
        int count=1;
        vector<int>ans;
        while(p2<nums.size())
        {
            if(nums[p1] == nums[p2])
            {
                count++;
                p2++;
            }
            else
            {
                if(count>1)
                {
                    ans.push_back(nums[p1]);

                }
                p1=p2;
                p2++;
                count=1;
            }

        }
        if(count>1 )
                {
                    ans.push_back(nums[p1]);

                }
        return ans;
        
    }
};
