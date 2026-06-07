class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int peak =0 ;
        int valley = 0;
        while(num1 <= num2)
        {
            string s = to_string(num1);
            for(int i=1 ; i<s.size()-1 ;i++)
            {
                if(s[i] > s[i-1] && s[i]>s[i+1])
                {
                    peak++;
                }
                else if(s[i] < s[i-1] && s[i] < s[i+1])
                {
                    valley++;
                }
            }
            num1++;

        }
        return peak+valley ;
    }
};
