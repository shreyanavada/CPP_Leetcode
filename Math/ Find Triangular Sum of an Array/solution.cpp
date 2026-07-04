class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>newnums;
        int p1 =0 , p2 =1;
        int sum ;
        while(nums.size() != 1)
        {
            p1=0 , p2 =1;
            while(p2<nums.size())
            {
                sum = 0;
                sum = (nums[p1] + nums[p2])%10;
                newnums.push_back(sum);
                p1++ , p2++;
            }
            nums.clear();
            for(int i=0 ;i<newnums.size() ;i++)
            {
                nums.push_back(newnums[i]);
            }
            newnums.clear();
        }
        return nums[0];
        
        
    }
};
