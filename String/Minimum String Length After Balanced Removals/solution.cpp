class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int counta = 0 ;
        int countb = 0 ;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i] == 'a')
            {
                counta++;
            }
            else
            {
                countb++;
            }
            if(counta == countb)
            {
                counta = 0 ;
                countb = 0 ;
            }
        }
        return abs(counta-countb);
        
    }
};
