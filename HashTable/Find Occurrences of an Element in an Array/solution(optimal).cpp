class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;
        vector<int>pos;
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(nums[i]==x)
            {
                pos.push_back(i);
            }
        }
        int count =pos.size();
        for(int i=0 ;i<queries.size() ;i++)
        {
            if(count >= queries[i])
            {
                ans.push_back(pos[queries[i]-1]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
        
        
    }
};
