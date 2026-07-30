class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int start =0 , end = n-1;
        double ele;
        vector<double>ans;
        while(n/2 >0)
        {
            ele = double((nums[start]+nums[end]))/2 ;
            ans.push_back(ele);
            start++;
            end--;
            n = n-2;
        }
        return *min_element(ans.begin() ,ans.end());
    }
};
