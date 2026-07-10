class Solution {
public:

    int BS1 (vector<int>arr , int low , int high , int target)
    {
        while(low <= high)
        {
        int mid = (low +high)/2 ;
        if(arr[mid] == target)
        {
            return mid ;
        }
        else if(arr[mid] > target)
        {
            high = mid-1 ;
        }
        else
        {
            low = mid+1;
        }
        }
        return -1;

    }
    int BS2 (vector<int>arr , int low , int high,int target)
    {
        while(low <= high)
        {
        int mid = (low +high)/2 ;
        if(arr[mid] == target)
        {
            return mid ;
        }
        else if(arr[mid] > target)
        {
            high = mid-1 ;
        }
        else
        {
            low = mid+1;
        }
        }
        return -1;

    }
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
        {
            if(nums[0] == target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        int index ;
        for(int i=0 ;i<nums.size()-1 ;i++)
        {
            if(nums[i]>nums[i+1])
            {
                index = i+1;
                break;
            }
        }
        if(target >= nums[0] && target <= nums[index-1])
        {
            return BS1(nums , 0 , index-1 , target);
        }
        else
        {
            return BS2(nums , index , nums.size()-1 , target);
        }
        
    }
};
