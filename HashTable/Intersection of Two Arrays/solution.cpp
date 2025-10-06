class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr(1001);
        vector<int>ans;
        for(int i=0 ;i<nums1.size() ;i++)
        {
            if(arr[nums1[i]]==0)
            {
                arr[nums1[i]]++;
            }
        }
        for(int i=0 ;i<nums2.size() ;i++)
        {
            if(arr[nums2[i]]==1)
            {
                ans.push_back(nums2[i]);
                arr[nums2[i]]=0;
                
            }
        }
        return ans;
    }
};
