class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1=0; //sum of primary diagonal.
        int sum2=0;//sum of secondary diagonal .
        for(int i=0 ;i<mat.size();i++) // row size
        {
            for(int j=0 ;j<mat[0].size();j++)// col size
            {
                if(i==j)
                {
                    sum1+=mat[i][j];
                }
                else if(i+j==mat.size()-1 && i!=j)
                {
                    sum2 += mat[i][j];
                }
            }
        }
        return sum1+sum2;
        
    }
};
