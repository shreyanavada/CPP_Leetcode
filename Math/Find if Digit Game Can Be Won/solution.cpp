class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumSingle=0;// to store sum of single digit numbers
        int sumDouble=0;// to store sum of double digit numbers
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(nums[i]<10)
            {
                sumSingle += nums[i];
            }
            else
            {
                sumDouble += nums[i];
            }
        }
        if(sumDouble>sumSingle ||sumDouble<sumSingle)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
