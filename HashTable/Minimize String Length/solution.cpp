class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>neww;
        for(int i=0 ;i<s.size() ;i++)
        {
            neww.insert(s[i]);
        }
        return neww.size();
        
    }
};
