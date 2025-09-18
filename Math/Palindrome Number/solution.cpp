class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int start=0 , end = str.size()-1;
        while(start < end)
        {
            if(str[start] != str[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
        
    }
};
