class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum;
        int min_pair = INT_MIN;
        sort(nums.begin() , nums.end());
        int start = 0 , end = nums.size()-1 ;
        while(start<end)
        {
            sum = nums[start]+nums[end];
            min_pair = max(sum , min_pair);
            start++;
            end--;
        }
        return min_pair;
        
    }
};
