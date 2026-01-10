class Solution {
public:
    void duplicateZeros(vector<int>& arr){
        int n = arr.size();
        int j = n-1;
        for(int i=0 ;i <arr.size() ;i++)
        {
            j = n-1;
            if(arr[i] == 0)
            {
                while(j > i)
                {
                    arr[j] = arr[j-1];
                    j--;
                }
                arr[j] = 0;
                i++ ;
                
                
            }
        }
    }
        
    
};
