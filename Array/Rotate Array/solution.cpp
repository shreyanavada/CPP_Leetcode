class Solution {
public:

    void reversee(vector<int>&arr , int start , int end)
    {
        while(start < end )
        {
            
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
        
    }
    void rotate(vector<int>& nums, int k) {
        
        reverse(nums.begin() , nums.end());
         
        int n = nums.size();
        k = k % n;

        
        reversee(nums, 0 , k-1);
        reversee(nums , k , nums.size()-1);
        
        
        
    }
};
