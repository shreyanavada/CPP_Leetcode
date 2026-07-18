class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin() , nums.end());
        int maxi=  *max_element(nums.begin() ,nums.end());
        int ans;
        for(int i=1 ;i<=maxi;i++)
        {
            if(maxi % i==0 && mini % i ==0)
            {
                ans = i;
            }
        }
        return ans;
    }
};
