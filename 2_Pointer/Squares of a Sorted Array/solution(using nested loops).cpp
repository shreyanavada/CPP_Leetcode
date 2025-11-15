class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0 , j =i+1;
        int n= nums.size();
        vector<int>ans;
        for(int i=0 ;i<n ;i++)
        {
            if(nums[i]<0)
            {
                nums[i] = -(nums[i]);
            }
        }
        while(i < n-1)
        {
            j=i+1;
            while(j<n )
            {
                if(nums[i]>nums[j])
                {
                     swap(nums[i] , nums[j]);
                     j++;

                }
                else
                {
                    j++;
                }
                
                
            }
            i++;
        }
        for(int i=0 ;i<n ;i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
        return ans;
    }
};
