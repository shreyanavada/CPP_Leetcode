class Solution {
public:
    int No_of_bouque(vector<int>arr , int days ,int k ,int m)
    {
        int no_of_flowers = 0 , Bouques = 0;
        for(int i=0 ;i<arr.size() ;i++)
        {
            if(arr[i] <= days)
            {
               no_of_flowers++;
               if(no_of_flowers == k) 
               {
                Bouques++;
                no_of_flowers = 0;
               }
            }
            else
            {
                no_of_flowers=0;
            }
        }
        return Bouques;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin() , bloomDay.end());
        int high = *max_element(bloomDay.begin() , bloomDay.end());
        int mid;
        int min_days = -1;
        while(low <= high)
        {
            mid = (low+high)/2;
            int b = No_of_bouque(bloomDay,mid,k,m);
            if(b >= m)
            {
                min_days = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return min_days;
        
    }
};
