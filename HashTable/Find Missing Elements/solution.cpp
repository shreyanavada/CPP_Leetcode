class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int min = *min_element(nums.begin() , nums.end());
        int maxi =*max_element(nums.begin() , nums.end());
       vector<int>hashi(maxi+1 , 0);
       for(int i=0 ;i<nums.size();i++)
       {
        hashi[nums[i]]=1;
       }
       for(int i=0 ;i<hashi.size() ;i++)
       {
        if(hashi[i] == 0)
        {
            ans.push_back(i);
        }
       }
       return ans;
    }
};
