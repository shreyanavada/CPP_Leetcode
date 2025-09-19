// This is using two pointer : K is a slow pointer which holds the value of the position where the next duplicate should be stored .
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=0 ;i <nums.size()-1 ;i++)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }
            else
            {
                nums[k]=nums[i+1];
                k++;
            }
        }
        return k;
        
    }
};
// time complexity would be O(n) .
