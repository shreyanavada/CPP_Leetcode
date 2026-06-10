class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans ;
        int edges=0 ;
        for(int i=0 ;i<matrix.size() ;i++)
        {
            edges=0;
            for(int j=0 ;j<matrix[0].size() ;j++)
            {
                if(matrix[i][j] == 1)
                {
                    edges++ ;
                }
            }
            ans.push_back(edges);
        }
        return ans;
    }
};
