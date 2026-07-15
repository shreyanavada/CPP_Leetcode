class Solution {
public:
    int noofdays(vector<int>arr , int capacity)
    {
        int load =0 ;
        int days_took =0;
        for(int i=0 ;i<arr.size() ;i++)
        {
            load += arr[i];
            if(load > capacity)
            {
                days_took++;
                load = arr[i];
            }
        }
        if(load<=capacity)
        {
            days_took++;
        }
        return days_took;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end());
        int sum =0 ;
        for(int i=0 ;i<weights.size() ;i++)
        {
            sum+=weights[i];
        }
        int high = sum;
        int mid;
        int d;
        int ans;
        while(low<=high)
        {
            mid =(low+high)/2;
            d =noofdays(weights ,mid);
            if(d <= days)
            {
                ans =mid;
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
