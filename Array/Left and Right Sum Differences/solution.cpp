class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>right_sum;
        vector<int>left_sum;
        int tot_sum=0;
        int right=0;
        int left=0;
        int i=0;
        for(int i=0 ;i<nums.size() ;i++)
        {
            tot_sum += nums[i];
        }
        while(i<nums.size())
        {
            right += nums[i];
            right_sum.push_back(tot_sum-right);
            i++;
        }
        i=0;
        left_sum.push_back(0);
        while(i<nums.size()-1)
        {
            left += nums[i];
            left_sum.push_back(left);
            i++;
        }
        vector<int>ans;
        int j=0;
        while(j<nums.size())
        {
            ans.push_back(abs(left_sum[j]-right_sum[j]));
            j++;
        }
        return ans;
        
    }
};
