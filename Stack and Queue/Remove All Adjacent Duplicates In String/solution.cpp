class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string str;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
           else if(s[i] == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!(st.empty()))
        {
            str += st.top();
            st.pop();
        }
        reverse(str.begin() , str.end());
        return str;
        
    }
};
