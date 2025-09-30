class Solution {
public:
    bool isPalindrome(string s) {
        vector<string>str;
        string ss;
        for(int i=0; i<s.size();i++)
            {
                
                if(isalpha(s[i]))
                {
                ss+=to_string(tolower(s[i]));
                    str.push_back(ss);
                    
                }
            }
        int start=0 , end=str.size()-1;
    
                while(start<=end)
                    {
                    if(str[start]==str[end])
                    {
                        start++;
                        end--;
                    }
                    else
                    {
                        return false;
                    }
                        
                    }
        return true;
            
    }
        
    
};