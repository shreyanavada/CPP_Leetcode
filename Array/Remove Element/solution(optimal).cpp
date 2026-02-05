// Two pointer method :
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr1 , ptr2 ; // these are two pointers .
        int countunique = 0 ;
        for(int i= 0;i<nums.size() ;i++)
        {
            if(nums[i] == val)
            {
                ptr2 = i ;
                break;
            }
            else
            {
                countunique ++ ;
            }
        }
        ptr1 = ptr2 + 1;
        while(ptr1 <nums.size() && ptr2<nums.size())
        {
            if(nums[ptr1] == nums[ptr2])
            {
                ptr1++;
            }
            else
            {
                countunique++;
                swap(nums[ptr1] , nums[ptr2]);
                ptr2++ ;
            }
        }
        return countunique;


    }
};
