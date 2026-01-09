class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1 ,s2 ;
        int c1 =0 ,c2=0;
        char y;
        int n=s.size();
        for(int i=0 ;i<n/2 ;i++)
        {
            s1 += s[i];
        }
        for(int i=n/2 ;i<n ;i++)
        {
            s2 += s[i];
        }
        for(int i=0 ;i<s1.size() ;i++)
        {
            y = tolower(s1[i]);
            if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u')
            {
                c1++;
            }
        }
        for(int i=0 ;i<s2.size() ;i++)
        {
            y = tolower(s2[i]);
            if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u')
            {
                c2++;
            }
        } 
        if(c1==c2)
        {
            return true;
        }  
        else
        {
            return false;
        }    
    }
};
