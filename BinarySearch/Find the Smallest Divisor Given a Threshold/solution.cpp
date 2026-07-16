class Solution {
public:
    int resultgiver(vector<int>arr , int divisor)
    {
        int result =0 ;
        for(int i=0 ;i<arr.size() ;i++)
        {
            result += ceil(double(arr[i])/divisor);
        }
        return result;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1;
        int high = *max_element(nums.begin() , nums.end());
        int mid;
        int smallest_divisor;
        while(low<=high)
        {
            mid = (low+high)/2;
            int Result = resultgiver(nums , mid);
            if(Result <= threshold)
            {
                smallest_divisor = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return smallest_divisor;

        
    }
};
