class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>arrp(26 , 0);
        vector<int>ans;
        if(s.size() < p.size())
        {
            return ans;
        }
        int p1 = 0 ;
        for(int i=0 ;i<p.size() ;i++)
        {
            arrp[p[i]-'a']++;
        }

        while(p1 <= s.size()-p.size())
        {
            vector<int>arrs(26 , 0);
            string str = s.substr(p1 , p.size());
            for(int i=0 ;i<str.size() ;i++)
            {
                arrs[str[i]-'a']++;
            }
            if(arrs == arrp)
            {
                ans.push_back(p1);
            }
            p1++;
        }
        return ans;
        
        
    }
};
