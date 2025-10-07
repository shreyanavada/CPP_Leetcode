class Solution {
public:
   
        int ones(vector<int>arr)
        {
            sort(arr.begin() , arr.end());
            int noOnes=-1;
            int low=0 ,high=arr.size()-1;
            while(low<=high)
            {
                int mid = (low+high)/2;
                if(arr[mid]==1)
                {
                    high =mid-1;
                    noOnes = arr.size()-mid;
                }
                else
                {
                    low=mid+1;
                }
            }
             return noOnes;
        }
     vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi=-1;
        int row=-1;
        for(int i=0 ;i<mat.size();i++)
        {
            int count1s = ones(mat[i]);
            if(count1s>maxi)
            {
                maxi=count1s;
                row=i;
            }
        }
        if(row==-1 && maxi==-1)
        {
            return{0,0};
        }
        else
        {
            return {row , maxi};
        }

       
    }
};
