class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int prefix_sum = 0 ;
        int ele;
        unordered_map<int,int>m;
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(nums[i] %2 == 0)
            {
                nums[i] = 0 ;
            }
            else
            {
                nums[i] = 1 ;
            }
        }
        for(int i=0 ;i<nums.size() ;i++)
        {
            prefix_sum += nums[i];
            ele = prefix_sum - k ;
            if(ele == 0)
            {
                count++;
            }
            if(m.count(ele))
            {
                count+= m[ele];
            }
            m[prefix_sum]++;
        }
        return count;
    }
};
