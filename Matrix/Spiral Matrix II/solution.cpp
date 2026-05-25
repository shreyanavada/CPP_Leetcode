class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0 , left =0 ;
        int right = n-1 , bottom = n-1 ;
       vector<vector<int>> arr(n, vector<int>(n));
        int count=1;

        while(left<=right && top<=bottom)
        {
            for(int i=left ; i<=right ;i++)
            {
                arr[top][i] = count;
                count++;
            }
            top++;
        
        for(int i=top ; i<=bottom ;i++)
        {
            arr[i][right] = count;
            count++;
        }
        right--;
        for(int i=right ; i>=left ;i--)
        {
            arr[bottom][i] = count;
            count++;
        }
        bottom--;
         for(int i=bottom ; i>=top ;i--)
        {
            arr[i][left] = count;
            count++;
        }
        left++;
        }
        return arr;
        
    }
};
