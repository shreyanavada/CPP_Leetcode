class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int col = matrix[0].size() ;
        int row = matrix.size() ;
       
        vector<vector<int>> ans(col, vector<int>(row, 0)); // creating the result 2D matrix with fixed number of rows and cols making all the eles zero .
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                ans[j][i] = matrix[i][j] ;
            }
        }
        return ans ;
        
    }
}; 
