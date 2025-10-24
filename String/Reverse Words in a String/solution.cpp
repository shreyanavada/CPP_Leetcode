class Solution {
public:
    string reverseWords(string s) {
        
        string str;
        string ans;
        string neww;
        int index; // marking the last index if there are any spaces at the last .
        int beginn;// marking the first index if there are any spaces at the beginning .
        int count=0 ;
        for(int i = s.size()-1 ; i>=0 ;i--)
        {
            if(isalpha(s[i]))
            {
                index = i;
                break;
            }
        }
        for(int i = 0; i<s.size() ;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                beginn = i;
                break;
            }
        }

        for(int i =index ; i>=beginn ;i--)
        {
            if(i==beginn)
            {
                str += s[i];
                reverse(str.begin() ,str.end());
                ans += str ;
            }
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                str += s[i];
            }
           
            else
            {
                reverse(str.begin() ,str.end());
                ans += str + " ";
                str.clear();
            }
        }
        for(int i=0 ;i<ans.size() ;i++)
        {
            if(isalpha(ans[i])||isdigit(s[i]))
            {
                neww += ans[i];
                count=0;
            }
            else 
            {
                count++;
                if(count==1)
                {
                    neww += " ";
                }
                else
                {
                    continue;
                }
               
            }
        }
        return neww;
    }
};
