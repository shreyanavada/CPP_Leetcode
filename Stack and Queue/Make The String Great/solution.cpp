class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i=0 ;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(abs(s[i]-st.top())==32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            
        }
        string str;
        while(!(st.empty()))
        {
            str += st.top();
            st.pop();
        }
        reverse(str.begin() , str.end());
        return str;
    }
};
