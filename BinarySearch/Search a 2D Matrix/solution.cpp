class Solution {
public:
   
        bool colnumber(vector<int>arr ,int target) // BS is done on each 1D array in a matix .
        {
            int n=arr.size();
            int low=0 , high =n-1;
            while(low<=high)
            {
                int mid = (low+high)/2;
                if(arr[mid]==target)
                {
                    return true;
                }
                else if(arr[mid]<target)
                {
                    low =mid+1;
                }
                else
                {
                    high =mid-1;
                }
            }
            return false;
        }
        bool searchMatrix(vector<vector<int>>& matrix, int target) {  
            for(int i=0 ;i<matrix.size() ;i++)
            {
              if(colnumber(matrix[i] , target) == true)
                {
                    return true;
                }
            } // afer checking each 1D array in a matrix even if the target is not found then outside the for loop return false ;
            return false;
        }
            
            
};
