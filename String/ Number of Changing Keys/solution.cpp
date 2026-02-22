class Solution {
public:
    int countKeyChanges(string s) {
        int change =0;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
        }
        for(int i=0 ;i<s.size()-1 ;i++)
        {
            for(int j = i+1 ;j<s.size() ; j++)
            {
                if(s[i]!=s[j])
                {
                    change++;
                    break;
                }
                else{
                    break;
                }
            }
        }
        return change;
        
    }
};
