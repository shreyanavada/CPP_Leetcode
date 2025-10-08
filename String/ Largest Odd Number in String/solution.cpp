class Solution {
public:
    string largestOddNumber(string num) {
        int index;
        string str;
        for(int i=num.size()-1 ;i>=0 ;i--)
        {
            
            if((num[i]-'0') % 2 != 0)
            {
                index = i;
                break;
            }
        }
        for(int i=0 ;i<=index ;i++)
        {
            str += (num[i]);
        }
        return str;
    }
};
