class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int maxi;
        vector<int>arr;
        bool just=false;
        for(int i=0 ;i<nums1.size();i++)
        {
            for(int j=0 ;j<nums2.size() ;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    
                    maxi=nums2[j];
                    for(int z=j ;z<nums2.size() ;z++)
                    {
                        if(nums2[z]>maxi)
                        {
                            just=true;
                            maxi=nums2[z];
                            arr.push_back(maxi);
                            break;
                        }
                        else
                        {
                            just=false;
                        }
                        

                    }
                    if(just==false)
                    {
                        arr.push_back(-1);
                    }

                }
            }
        }
        return arr;
    }
};
