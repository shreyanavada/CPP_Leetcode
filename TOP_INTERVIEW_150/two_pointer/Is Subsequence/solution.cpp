class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0 ,j=0;
        bool ans =false;
        if(s.empty())
        {
            return true;
        }
        if(t.empty())
        {
            return false;
        }
        while(j<t.size() && i<s.size())
        {
            if(s[i] == t[j])
            {
                ans =true;
                i++;
                j++;
            }
            else
            {
                ans=false;
                j++;
            }
            

        }
        if(i!=s.size())
        {
            return false;
        }
        return ans;
        
    }
};
