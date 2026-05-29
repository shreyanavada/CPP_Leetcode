class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum ;
        int n ;
        int min_ele = INT_MAX;
        for(int i =0 ;i<nums.size() ;i++)
        {
            sum = 0 ;
            n=nums[i];
            while(n>0)
            {
                sum += n%10; 
                n = n/10;
            }
            if(sum < min_ele)
            {
                min_ele = sum ;
            }
            nums[i] = sum ;
            

        }
        return min_ele;
        
    }
};
