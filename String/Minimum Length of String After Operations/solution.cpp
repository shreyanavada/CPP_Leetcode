class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        int length = 0 ;
        for(int i=0 ;i<s.size() ;i++)
        {
            mp[s[i]]++;
        }
        
        for(auto it :mp)
        {
            while(it.second > 2)
            {
                it.second = it.second -2 ;
            }
            length += it.second ;
        }
        return length;
    }
};
