class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0  ;
        char temp;
        int n = s.size();
        while(i<n)
        {
            temp = s[0];
            for(int j=1 ;j<n ;j++)
            {
                s[j-1] = s[j];
            }
            s[n-1] = temp ;
            if(s == goal)
            {
                return true;
            }
            else
            {
                i++;
            }
        }
        return false;
        
    }
};
