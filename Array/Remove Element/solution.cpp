class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin() , nums.end());
        int countumique = 0 ; // counts the unique elements
        int k; // keeps track of first occurance of val .
        for(int i = 0 ;i < nums.size() ;i++)
        {
            if(nums[i] == val)
            {
                k = i;
                break;
            }
            else
            {
                countumique++;
            }
        }
        int j = k;
        while(j<nums.size() && k<nums.size())
        {
            if(nums[j] == val)
            {
                j++;
            }
            else
            {
                countumique++;
                swap(nums[j] , nums[k]);
                j++;
                k++;
            }
        }
        return countumique ;
    }
};
