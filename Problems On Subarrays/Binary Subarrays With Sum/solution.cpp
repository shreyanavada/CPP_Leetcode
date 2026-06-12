class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         int prefix_sum = 0 ;
        int ele;
        int count = 0 ;
        unordered_map<int,int>m;
        for(int i=0 ;i<nums.size() ;i++)
        {
            prefix_sum += nums[i];
            ele = prefix_sum - goal ;
            if(ele == 0)
            {
                count++;
            }
             if(m.count(ele))
            {
                count += m[ele];
            }
            m[prefix_sum]++ ;

        }
        return count ;
        
    }
    
};
