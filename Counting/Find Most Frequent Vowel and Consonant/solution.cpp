class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>consonantt;
        unordered_map<char,int>vowel;
        int maxcon=INT_MIN;
        int maxvol=INT_MIN;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i]!= 'a' &&s[i]!= 'e'&&s[i]!= 'i'&&s[i]!= 'o'&& s[i]!= 'u' )
            {
                consonantt[s[i]]++;
                maxcon =max(maxcon , consonantt[s[i]]);
            }
        }
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i]== 'a' ||s[i]== 'e'||s[i]== 'i'||s[i]== 'o'|| s[i]== 'u' )
            {
                vowel[s[i]]++;
                maxvol =max(maxvol , vowel[s[i]]);
            }
        }
        
        if(maxcon == INT_MIN && maxvol == INT_MIN)
            return 0;
        else if(maxcon == INT_MIN)
            return maxvol;
        else if(maxvol == INT_MIN)
            return maxcon;
        else
            return maxcon + maxvol;

        
    }
};
