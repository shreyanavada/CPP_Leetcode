class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        vector<int>ans;
        int sizee;
        int n = nums1.size();
        int m = nums2.size();
        
        int p1 = 0 ;
        int p2 = 0;
        while(p1 < n && p2 < m )
        {
            if(nums1[p1] == nums2[p2])
            {
                ans.push_back(nums1[p1]);
                p1++;
                p2++;
            }
            else if(nums1[p1] > nums2[p2])
            {
                p2++;
            }
            else
            {
                p1++;
            }
        }
        return ans;
        
    }
};
