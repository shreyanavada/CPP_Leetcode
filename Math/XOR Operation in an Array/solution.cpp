class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>ans;
        
        int xorr=0;
        for(int i=0 ;i<n ;i++)
        {
            
            ans.push_back(start+2*i);
        }
        
        for(int i=0 ;i<ans.size();i++)
        {
            xorr ^= ans[i];
        }
        return xorr;
        
    }
};
