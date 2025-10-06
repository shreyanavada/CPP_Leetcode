class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ip;
        vector<int>ans;
        unordered_map<int,int>m;
        int n= grid[0].size();
        
        for(int i=0 ;i<n;i++)
        {
            for(int j=0 ;j<n ;j++)
            {
                ip.push_back(grid[i][j]);
            }
        }
        for(int i=0 ;i<ip.size();i++)
        {
            m[ip[i]]++;
            if(m[ip[i]]==2)
            {
                ans.push_back(ip[i]);
            }
        }
        for(int i=1 ; i<=n*n ;i++)
        {
            if(!(m.count(i)))
            {
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};
