class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0 , count1 = 0, count2 =0 ;
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(nums[i] == 0)
            {
                count0++;
            }
            else if(nums[i]==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
      //this would take a a tc O(n) . 
        int index =0 ;
        while(count0>0)
        {
            nums[index] = 0 ;
            index++;
            count0--;
        }
        while(count1>0)
        {
            nums[index] = 1 ;
            index++;
            count1--;
        }
        while(count2>0)
        {
            nums[index] = 2 ;
            index++;
            count2--;
        }
      //time complexity of this would be O(n)
        
    }

};
// overall tc : O(2n)               sc : O(1) . 
