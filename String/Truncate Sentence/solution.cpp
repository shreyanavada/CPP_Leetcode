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
                word +=s[i];
            }
            else
            {
                
                str.push_back(word);
                word.clear();
            }
            
        }
        str.push_back(word);
        int count =0 ;
        string ans;
        for(int i=0 ;i<str.size() ;i++)
        {
            if(count <= k-1)
            {
            if(count == k-1)
            {
                ans += str[i];
                break;
            }
            else
            {
                ans += str[i] + " ";
                count++;
            }
            }
            
        }
        
        return ans;
        
    }
};
