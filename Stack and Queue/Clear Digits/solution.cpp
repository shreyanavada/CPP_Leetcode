class Solution {
public:
    string clearDigits(string s) {
        stack<int>st;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i]>=48 && s[i]<=57)
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
        reverse(str.begin() ,str.end());
        return str;
        
    }
};
