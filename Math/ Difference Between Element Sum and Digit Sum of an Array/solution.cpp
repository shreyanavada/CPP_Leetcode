class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0 ;
        int sum2 = 0;
        for(int i=0 ;i<nums.size() ;i++)
        {
            int n= nums[i];
            if(n>9)
            {
                while(n>0)
                {
                    sum += n % 10;
                    n = n/10;
                }
            }
            sum += n;
        }
        for(int i=0;i<nums.size() ;i++)
        {
            sum2 += nums[i];
        }
        return sum2-sum;
        
    }
};
