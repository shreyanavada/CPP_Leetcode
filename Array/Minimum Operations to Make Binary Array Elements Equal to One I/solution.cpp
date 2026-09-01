class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ptr = 0;
        int sum = 0;
        int count=0;
        while(ptr <= nums.size()-3)
        {
            if(nums[ptr] == 0)
            {
                count++;
                nums[ptr] = 1;
                if(nums[ptr+1] == 0)
                {
                    nums[ptr+1] =1;
                }
                else
                {
                    nums[ptr+1] =0;
                }
                if(nums[ptr+2] == 0)
                {
                    nums[ptr+2]=1;
                }
                else
                {
                    nums[ptr+2]=0;
                }
            }
            ptr++;
        }
        for(int i=0 ;i<nums.size();i++)
        {
            sum += nums[i];
        }
        if(sum == nums.size())
        {
            return count;
        }
        else
        {
            return -1;
        }
        
    }
};
