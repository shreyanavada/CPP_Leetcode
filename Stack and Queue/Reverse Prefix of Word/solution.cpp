class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        for(int i=0 ;i<word.size() ;i++)
        {
            if(word[i] == ch)
            {
                st.push(word[i]);
                break;
            }
            if(i==word.size()-1)
            {
                return word;
            }
            st.push(word[i]);
        }
        for(int i=0 ;i<word.size();i++)
        {
            if(!(st.empty()))
            {
                word[i] = st.top();
                st.pop();
            }
            else
            {
                break;
            }
        }
        return word;
    }
};
