class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int>arr;
        int alice=0;
        int bob=1;
        while(bob<nums.size() && alice<nums.size())
        {

        
            arr.push_back(nums[bob]);
            arr.push_back(nums[alice]);
            bob += 2;
            alice += 2;
        }
        
        return arr;
    }
};
// time complexity : O(nlogn) because of sorting .
