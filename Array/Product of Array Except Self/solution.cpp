class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left_arr;
        int n =nums.size();
        vector<int>right_arr(n,0);
        vector<int>ans;
        int mul =1 ;
        for(int i=0 ;i<nums.size() ;i++)
        {
            mul *= nums[i];
            left_arr.push_back(mul);
        }
        mul = 1;
        for(int i=nums.size()-1 ;i>=0 ;i--)
        {
            mul *= nums[i];
            right_arr[i] = mul;
        }
        int ptr = 0;
        while(ptr < nums.size()-1)
        {
            if(ptr==0)
            {
                ans.push_back(right_arr[ptr+1]);
                ptr++;
            }
            else
            {
            mul = left_arr[ptr-1]*right_arr[ptr+1];
            ans.push_back(mul);
            ptr++;
            }
        }
        ans.push_back(left_arr[ptr-1]);
        
    
    return ans;
    }
};
