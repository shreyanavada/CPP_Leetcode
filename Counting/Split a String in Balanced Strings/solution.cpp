class Solution {
public:
    int balancedStringSplit(string s) {
        int countR=0;
        int countL=0;
        int total=0;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i] == 'R')
            {
                countR++;
            }
            else if(s[i] == 'L')
            {
                countL++;
            }
            if(countL == countR)
            {
                total++;
                countL=0;
                countR=0;
            }
        }
        return total;
    }
};
