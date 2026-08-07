class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end()); // solved it by sorting .
        int counter = nums[0];
        int i=0;
        vector<int>ans;
        while(i < nums.size())
        {
            if(counter == nums[i])
            {
                counter++;
                i++;
            }
            else
            {
                ans.push_back(counter);
                counter++;
            }
        }
        return ans;
        
    }
};
