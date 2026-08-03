class Solution {
public:
    string sortSentence(string s) {
        map<int,string>m;
        string w;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(isalpha(s[i]))
            {
                w+=s[i];
            }
            else if(isdigit(s[i]))
            {
                m[s[i]] = w;
                w.clear();
            }
        }
        string ans;
        for(auto x:m)
        {
            ans += x.second+" ";
        }
        ans.pop_back();
        return ans;
    }
};
