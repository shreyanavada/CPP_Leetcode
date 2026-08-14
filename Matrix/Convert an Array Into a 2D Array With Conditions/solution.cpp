class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = *max_element(nums.begin() ,nums.end());
        vector<int>hash(n+1);
        vector<int>arr;
        vector<vector<int>> ans;
        for(int i=0 ;i<nums.size() ;i++)
        {
            hash[nums[i]]++;
        }
        int max_freq = *max_element(hash.begin() ,hash.end());
        int k=0;
        while(k<max_freq)
        {
            arr.clear();
            for(int i=0 ;i<n+1;i++)
            {
                if(hash[i] != 0)
                {
                    arr.push_back(i);
                    hash[i]--;
                }
            }
            ans.push_back(arr);
            k++;
        }
        return ans;
        
    }
};
