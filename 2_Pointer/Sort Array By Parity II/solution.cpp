class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i=0 ;
        int j=1;
        int ans[n];
        vector<int>gg;
        for(int k=0 ;k<nums.size() ;k++)
        {
            if(nums[k]%2==0)
            {
                ans[i]=nums[k];
                i=i+2;
            }
            else
            {
                ans[j]=nums[k];
                j=j+2;
            }
        }
        for(int i=0 ; i<n ;i++)
        {
            gg.push_back(ans[i]);
        }
        return gg;
    }
};
