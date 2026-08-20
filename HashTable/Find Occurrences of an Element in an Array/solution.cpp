class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;
        vector<int>occurance(nums.size());
        int count = 0;
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(nums[i] == x)
            {
                count++;
            }
        }
        int countx = 0;
        for(int i=0 ; i<nums.size() ;i++)
        {
            if(nums[i] == x)
            {
                countx++;
                occurance[i] = countx ;
            }
        }

        for(int i=0 ;i<queries.size() ;i++)
        {
            if(count >= queries[i])
            {
                for(int k=0; k<occurance.size() ;k++)
                {
                    if(queries[i] == occurance[k])
                    {
                        ans.push_back(k);
                        break;
                    }
                }
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
