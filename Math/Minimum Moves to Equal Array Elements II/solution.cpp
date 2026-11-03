class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        int n = nums.size()-1;
        int mid = (0+n)/2 ;
        int count = 0;

        for(int i=0 ;i<nums.size();i++)
        {
            if(i!=mid)
            {
                if(nums[i] < nums[mid])
                {
                    count += nums[mid] - nums[i];
                }
                else
                {
                    count+= nums[i] - nums[mid];
                }

            }
        }
        return count;
    }
};
