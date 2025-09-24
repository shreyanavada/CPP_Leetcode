class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastPtr=0 ; // keeps track of the index of the last word .
        int count=0;
        for(int i=s.size()-1 ;i>=0 ;i--) // to calculate lastptr .
        {
            if(isalpha(s[i]))
            {
                lastPtr=i;
                break;
            }
        }
        while(lastPtr>=0)
        {
            if(isalpha(s[lastPtr]))
            {
               count++;
               lastPtr--;
            }
            else
            {
                break;
            }
        }
       return count;
    }
};
