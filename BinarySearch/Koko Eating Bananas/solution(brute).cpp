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
        int count =1;
        long long hr;
        int maxK =*max_element(piles.begin() ,piles.end());
        while(count <= maxK)
        {
            hr = numberofhours(piles ,count);
            if(hr > h)
            {
                count++;
            }
            else
            {
                return count;
            }
        }
        return 0;
        
    }
};
