class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int prefix_sum = 0;
        int maxi = 0;
        int len = 0;
   
        unordered_map<int,int>m;
        m[0] = -1;

        for(int i=0 ;i<nums.size() ;i++)
        {
            if(nums[i] == 0)
            {
                nums[i] = -1;
            }
            prefix_sum += nums[i];
            if(!(m.count(prefix_sum)))
            {
                m[prefix_sum] = i;
            }
            else
            {
                len = i - m[prefix_sum] ;
                maxi = max(maxi , len);
            }

        }
        return maxi;

        
    }
};
