class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int innersubCount = 0;
        
        int sum=0;
        int CompleteSubarry = 0;
        int maxi = *max_element(nums.begin() , nums.end());
        vector<int>hashmap(maxi+1,0) ;
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(hashmap[nums[i]] == 0)
            {
                hashmap[nums[i]] =1 ;
                sum += nums[i];
            }
        }
       
        for(int i=0 ; i<nums.size() ;i++)
        {
            innersubCount = 0;
             vector<int>h(maxi+1,0) ;
            for(int j=i ;j<nums.size() ;j++)
            {
                if(h[nums[j]] == 0)
                {
                    h[nums[j]] = 1;
                    innersubCount += nums[j];
                }
                if(innersubCount == sum)
                {
                    CompleteSubarry++;
                }
            }
        }
        return CompleteSubarry ;

        
    }
};
