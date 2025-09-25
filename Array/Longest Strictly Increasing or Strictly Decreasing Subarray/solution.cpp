class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.size() == 1)
        {
            return 1;
        }
        int incresingLen = 0; //to store the longest strictly increasing subarray
        int decresingLen = 0;//to store the longest strictly decreasing subarray
        int maxi1 = 0; 
        int maxi2 = 0;

        for (int i = 0;i < nums.size()-1;i++)
        {
            if (nums[i] != nums[i + 1])
            {
            break;
            }
            else
            {
              maxi1 = 1;
              maxi2 = 1;
            }
    
        }

        for (int i = 0;i < nums.size()-1;i++)
        {
            incresingLen = 1;
            for (int j = i;j < nums.size()-1;j++)
            {
                if (nums[j] < nums[j + 1])
                {
                    incresingLen++;
                     maxi1 = max(maxi1, incresingLen);
                }
                else
                {
                     break;
                }
             }
        }
        for (int i = 0;i < nums.size()-1;i++)
        {
            decresingLen  = 1;
            for (int j = i;j < nums.size()-1;j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    decresingLen ++;
                    maxi2 = max(maxi2, decresingLen );
                }
                else
                {
                    break;
                }
            }
        }      
        if (maxi1 >= maxi2)
        {
             return maxi1;
        }
        else
        {
            return maxi2;
        }   
    }
};
