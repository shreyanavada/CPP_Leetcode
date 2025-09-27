class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int freq = INT_MIN;
        int ans;
        for(auto x:nums)
        {
            m[x]++;
            if(freq<m[x])
            {
                freq=m[x];
                ans=x;
            }
        }
        return ans;
        
    }
};
