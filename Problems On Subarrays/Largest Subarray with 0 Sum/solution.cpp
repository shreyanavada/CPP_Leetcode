class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int ps =0 ;
        int longest =0;
        unordered_map<int,int>m;
        
        for(int i=0 ;i<arr.size() ;i++)
        {
            ps += arr[i];
            if(ps == 0)
            {
                longest = max(longest,i+1);
            }
            if(m.count(ps))
            {
                longest = max(longest,i-m[ps]);
            }
            if(!(m.count(ps)))
            {
                m[ps] = i;
            }
        }
        return longest;
    }
};
