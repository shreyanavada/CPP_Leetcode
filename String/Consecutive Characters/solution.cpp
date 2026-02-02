class Solution {
public:
    int maxPower(string s) {
        int Len = 1; // at first the length of each char would be 1 .
        int maxi = 1;
        for(int i=0 ;i<s.size() ;i++)
        {
            Len = 1;
            for(int j=i+1 ;j<=s.size()-1 ;j++)
            {
                if(s[i] == s[j])
                {
                    Len++;
                    if(Len > maxi)
                    {
                        maxi = Len ;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        return maxi ;
    }
};
