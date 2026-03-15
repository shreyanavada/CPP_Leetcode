class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int open =0 ;
        int close =0 ;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i] == '(')
            {
                open++;
                st.push(s[i]);
            }
            else
            {
                if(!(st.empty()))
                {
                st.pop();
                open--;

                }
                else
                {
                    close++;
                }
            }
        }
    
        if(open!=0 && close!=0)
        {
            return open+close;
        }
        if(close != 0)
        {
            return close;
        }
        if(open!=0)
        {
            return open ;
        }
        return 0;
    }
};
