class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        int min = *min_element(nums.begin() , nums.end());
        vector<int>ans;
        vector<int>hash_arr(maxi+1 , 0); // using hashing this problem is solved
        for(int i=0 ;i<nums.size() ;i++)
        {
            hash_arr[nums[i]] =1;
        }

        for(int i=min ;i<=maxi ;i++)
        {
            if(hash_arr[i] == 0)
            {
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};
