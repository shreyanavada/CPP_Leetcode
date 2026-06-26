class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string>str;
        string word;
        string ss;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i] != ' ')
            {
                ss +=s[i];
            }
            else
            {
                
                str.push_back(ss);
                ss.clear();
            }
            
        }
        str.push_back(ss);
        int count =0 ;
        string ans;
        for(int i=0 ;i<str.size() ;i++)
        {
            if(count <= k-1)
            {
                ans += str[i] + " ";
                count++;
            }
            
        }
        ans += str[str.size()-1];
        return ans;
        
    }
};
