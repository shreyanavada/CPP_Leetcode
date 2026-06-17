class Solution {
public:
    int reverseDegree(string s) {
        int sum =0 ;
        int rev;
        for(int i=0 ;i<s.size() ;i++)
        {
            rev= 26 - (s[i] - 'a' + 1) + 1;
            sum +=(rev*(i+1));
        }
        return sum;
        
    }
};
