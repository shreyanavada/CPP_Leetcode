class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string ,int>m;
        string s;
        vector<string>str;
        for(int i=0 ;i<s1.size() ;i++)
        {
            if(s1[i]!=' ')
            {
                s+=s1[i];
            }
            else
            {
                m[s]++;
                s.clear();
            }
        }
        m[s]++;
        s.clear();
        for(int i=0 ;i<s2.size() ;i++)
        {
            if(s2[i]!=' ')
            {
                s+=s2[i];
            }
            else
            {
                m[s]++;
                s.clear();
            }
        }
        m[s]++;
        s.clear();
        for(auto it : m)
        {
            if(it.second == 1)
            {
                str.push_back(it.first);
            }
        }
        return str;
        
    }
};
