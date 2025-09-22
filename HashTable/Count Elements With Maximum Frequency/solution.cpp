class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 1;
        }
    int arr[106] = { 0 }; // initialiazing the array elements to 0 .
    int maxi = INT_MIN;
    int count=0;
    for (int i = 0; i < nums.size();i++)
    {
        arr[nums[i]]++;
        
        if (maxi < arr[nums[i]])
        {
            maxi = arr[nums[i]];
        }
    }
    for (int i = 0;i < 106;i++)
    {
        if (maxi == arr[i])
        {
            count++;
        }
    }
    return count * maxi;
    }
};
