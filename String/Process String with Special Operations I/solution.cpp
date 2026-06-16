class Solution {
public:
    string processStr(string s) {
        string result= "";
        int pt =0 ;
        int track_alpha ;
        while(pt < s.size())
        {
            if(isalpha(s[pt]))
            {
                result += s[pt];
                track_alpha = pt;
            }
            else if(s[pt] == '*')
            {
                if(!(result.empty()))
                {
                 result.pop_back();
                  track_alpha = pt;
                }
            }
            else if(s[pt] == '#')
            {
                result +=result;
            }
            else
            {
                 track_alpha = pt;
                reverse(result.begin() , result.end());
            }
            pt++;
        } 
        return result ;       
    }
};
