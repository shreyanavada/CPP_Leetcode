class Solution {
public:
    string reverseWords(string s) {
        string str;
        string ans;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i] != ' ')
            {
                str += s[i];
            }
            
            else if(s[i]==' ')
            {
                reverse(str.begin(), str.end());
                ans += str+" " ;
                str.clear();
            }
        }
        reverse(str.begin(), str.end()); // new trick , remember this .
                ans += str;
        return ans;
        
    }
};
