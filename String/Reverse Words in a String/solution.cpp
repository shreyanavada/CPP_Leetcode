// Stack is Used to crack this problem :
// time complexity : O(n)        space complex: O(n) because of stack .
class Solution {
public:
    string reverseWords(string s) {
        stack<string>ans;
        string str="";
        for(int i=0 ;i<s.size() ;i++)
        {
            if(isalnum(s[i]) )
            {
                str += s[i];
            }
            else
            {
                if(!(str.empty()))
                {
                    ans.push(str);
                    str.clear();
                }
                
                
            }
        }
        if(!(str.empty()))
        {
            ans.push(str);
        }
        string output;
        int sizee = ans.size();
        
        while(!(ans.empty()))
        {
            if(sizee == 1)
            {
                output += ans.top();
                break;
            }
            output += ans.top()+" ";
            ans.pop();
            sizee--;
        }
        return output ;
    }
};
