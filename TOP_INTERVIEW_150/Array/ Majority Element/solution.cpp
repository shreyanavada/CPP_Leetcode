// Using unordered_map :
//time complexity : O(n)      space complexity:O(n) .
 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        int ele;
        unordered_map<int , int>m;
        for( int i =0 ; i<nums.size() ;i++)
        {
            m[nums[i]]++;
            if(m[nums[i]] >majority)
            {
                majority = m[nums[i]] ;
                ele = nums[i] ;
            }
        }
        return ele ;
    }
};
