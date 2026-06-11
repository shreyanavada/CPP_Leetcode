class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st;
        string str;
        int open =0 , close =0 ;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(isalpha(s[i]))
            {
                str += s[i];
            }
            else if(s[i] == '(')
            {
                str += '(';
                st.push('(');
                open++;
            }
            else
            {
                if(!(st.empty()))
                {
                    st.pop();
                    open--;
                    str+= ')';
                }
                else
                {
                    close++;
                }
            }
        }
        if(close == open)
        {
            return "";
        }
        else
        {
            return str;
        }
        
    }
};
