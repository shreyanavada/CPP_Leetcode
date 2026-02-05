// used sorting , instead of using map which increases the space complexity . We can use sorting 
// time complexity : O(nlogn)     space complexity : O(1) .
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int majority = 0 ;
        int count=1;
        int ele;
        if(nums.size() == 1)
        {
            return nums[0] ;
        }
        for(int i=0 ;i<nums.size()-1 ;i++)
        {
            if(nums[i] == nums[i+1])
            {
                count++;
                if(count >majority)
                {
                    majority = count ;
                    ele = nums[i];
                }
            }
            else{
                
                {
                    count=1;
                }
            }
            
        }
        return ele ;
        
    }
};
