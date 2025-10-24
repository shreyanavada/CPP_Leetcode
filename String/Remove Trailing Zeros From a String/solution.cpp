class Solution {
public:
    string removeTrailingZeros(string num) {
        int index ;
        string ansStr ;
        for(int i = num.size()-1 ; i >= 0 ; i --)
        {
            if(num[i] != '0')
            {
                index = i;
                break;
            }
        }
        for(int i = 0 ;i <= index ;i ++)
        {
            ansStr += num[i];
        }
        return ansStr ;
    }
};
