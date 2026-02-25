class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        string str;
        string str2;
        for(int i =0 ;i<s.size() ;i++)
        {
            if(s[i] == '#')
            {
                if(!(st1.empty()))
                {
                    st1.pop();
                }
            }
            else
            {
                st1.push(s[i]);
            }
        }
        while(!(st1.empty()))
        {
            str += st1.top();
            st1.pop();
        }
        for(int i =0 ;i<t.size() ;i++)
        {
            if(t[i] == '#')
            {
                if(!(st2.empty()))
                {
                    st2.pop();
                }
            }
            else
            {
                st2.push(t[i]);
            }
        }
        while(!(st2.empty()))
        {
            str2 += st2.top();
            st2.pop();
        }
        return str2==str;


        
    }
};
