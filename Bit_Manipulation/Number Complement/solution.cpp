class Solution {
public:
    int findComplement(int num) {
        int remainder;
        string num1;
        while(num>0)
        {
            remainder = num % 2;
            num1 +=to_string(remainder ) ;
            num = num/2;
        }
        reverse(num1.begin() , num1.end());
        for(int i=0 ;i<num1.size() ;i++)
        {
            if(num1[i] == '0')
            {
                num1[i] = '1';
            }
            else
            {
                num1[i] = '0';
            }
        }
        int deci = 0;
        for(int i=0 ;i<num1.size() ;i++)
        {
            deci = (deci*2) + (num1[i]-'0');  // very good formula to convert Binary to Decimal !!!!
        }
        return deci;
    }
};
