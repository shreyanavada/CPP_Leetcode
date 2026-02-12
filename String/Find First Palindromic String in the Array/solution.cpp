class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        int start =0 ;
        int end ;
        bool a;
        string s;
        for(int i =0 ;i<words.size() ;i++)
        {
            s =words[i];
            end = s.size()-1;
            while(start<=end)
            {
                if(s[start] == s[end])
                {
                    start++;
                    end--;
                    a = true ;
                }
                else
                {
                    a=false;
                    start =0 ;
                    
                    break;
                }
            }
            if(a==true)
            {
                return s;
            }
        }
        return "";
    }
};
