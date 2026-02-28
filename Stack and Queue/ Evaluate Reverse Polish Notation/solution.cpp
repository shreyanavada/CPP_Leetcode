class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        //tokens are given in postfix expression .
       //then this exp is converted to infix expression 
      // solving it would give the correct answer .
        int ans;
        stack<int>st;
        int p;
        
        for(int i=0 ;i<tokens.size() ;i++)
        {
            if(tokens[i]=="+" || tokens[i] == "*" || tokens[i] == "/" || tokens[i]=="-")
            {
                int t2 = st.top();
                st.pop();
                int t1 = st.top();
                st.pop();
                if(tokens[i]=="+")
                {
                    p = t1 + t2 ;
                    st.push(p);
                }
                else if(tokens[i]=="-")
                {
                    p = t1 - t2 ;
                    st.push(p);
                }
                else if(tokens[i] == "*")
                {
                    p = t1*t2;
                    st.push(p);
                }
                else
                {
                    p = t1/t2;
                    st.push(p);
                }
            
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
