class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n= grid.size();
        vector<int>arr(n*n+1);
        vector<int>ans;
        int missing ,repeated;
        for(int i=0 ;i<n;i++)
        {
            for(int j=0 ;j<n ;j++)
            {
                arr[grid[i][j]]++;
            }
        }
        for(int i=1 ;i<=n*n ;i++)
        {
            if(arr[i]==2)
            {
               repeated =i; // we are doing this becoz the order should be like{repeated , missing} .
            }
            else if(arr[i]==0)
            {
                missing=i;
            }
        }
        return {repeated ,missing};
    }
};
