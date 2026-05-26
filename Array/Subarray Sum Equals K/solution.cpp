class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefix_sum = 0 ;
        int ele;
        int count = 0 ;
        unordered_map<int,int>m;
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
                count += m[ele];
            }
            m[prefix_sum]++ ;

        }
        return count ;
        
    }
};
