class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int n;
        int finalCount = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            n = nums[i];
            while(n > 0)
            {
                count ++;
                n = n / 10;
            }
            if(count % 2 == 0)
            {
                finalCount ++;
                count = 0;
            }
            else
            {
                count = 0;
            }
           
        }
        return finalCount ;
    }
};
