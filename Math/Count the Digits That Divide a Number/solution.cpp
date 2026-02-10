class Solution {
public:
    int countDigits(int num) {
        string str = to_string(num);
        int count=0 ;
        for(int i= 0 ;i<str.size() ;i++)
        {
            if(num % (str[i]-'0') == 0)
            {
                count++;
            }
        }
        return count;
        
    }
};
