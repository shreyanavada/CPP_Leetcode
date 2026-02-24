class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum =0;
        int t1 =0 , t2 =-1;
        for(int i=0 ;i<operations.size() ;i++)
        {
            
            
             if(operations[i] == "C")
            {
                sum = sum-st.top();
                st.pop();
            }
            else if(operations[i] == "D")
            {
                st.push(st.top()*2);
                sum += st.top();
            }
            else if(operations[i] == "+")
            {
                int t1 = st.top();
                st.pop();
                int t2 = st.top();
                st.push(t1);
                st.push(t1+t2);
                sum += st.top();
            }
            else
            {
                st.push(stoi(operations[i]));
                t2 = t1 ;
                t1 =stoi(operations[i]);

                sum += stoi(operations[i]);
            }

        }
        return sum;
        
    }
};
