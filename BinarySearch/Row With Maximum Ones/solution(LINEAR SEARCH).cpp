// USING LINEAR SEARCH
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi=INT_MIN;
        int row=INT_MAX;
        int count=0;
        
        for(int i=0 ;i<mat.size() ;i++)
        {
            count=0; // FOR EACH ROW COUNT = 0 
            for(int j=0 ;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)

                {
                    count++;
                    if(maxi<count)
                    {
                        maxi=count;
                        row=i;
                    }
                }
            }
        }
        if(row==INT_MAX && maxi==INT_MIN) // IN CASE OF NO 1'S IN A MATRIX THEN IT SHOULD RETURN {0,0}
        {
            return {0 ,0};
        }
        else
        {
          return {row , maxi} ;
        }
    }
};
