class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ss; // have to consider two maps to check correspondingly .
        unordered_map<char,char>tt; 
        bool ans=true;
        for(int i=0 ;i<s.size() ;i++)
        {
            
            if(ss.count(s[i])&& ss[s[i]]!=t[i] )
            {
                ans=false;
                return ans;
            }
           
            ss[s[i]] = t[i];
        }
        for(int i=0 ;i<t.size() ;i++)
        {
            
            if(tt.count(t[i]) && tt[t[i]]!=s[i] )
            {
                ans=false;
                
            }
           
            tt[t[i]] = s[i];
        }
        return ans;

    }
};
