class Solution {
public:
    long long numberofhours(vector<int>&arr , int count)
    {
        long long hour =0 ;
        for(int i=0 ;i<arr.size() ;i++)
        {
            hour += ceil(double(arr[i])/count) ;
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin() , piles.end());
        int low =1 , high =maxi;
        int mid;
        long long hr;
        int ans ;
        while(low <= high)
        {
            mid =(low+high)/2;
           
           hr = numberofhours(piles , mid);
          
           if(hr <= h)
           {
            ans = mid;
            high = mid-1;
           }
           else
           {
            low = mid+1;
           }
        }
        return ans;
    }
};
