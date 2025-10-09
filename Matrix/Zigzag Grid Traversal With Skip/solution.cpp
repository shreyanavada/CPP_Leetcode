class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
      
        for(int i=0 ;i<grid.size() ;i++)
        {
            for(int j=0 ;j<grid[0].size();j++)
            {
                if(i==0 && j==0)
                {
                    ans.push_back(grid[i][j]);
                    
                }
                else if((i+j) % 2==0)
                {
                    ans.push_back(grid[i][j]);
                }
            }
        }
        return ans;
    }
};
