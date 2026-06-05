class Solution {
public:
    bool isPalindrome(int x) {
        int n =x;
        string y;
        while(n>0)
        {
            y += n%10;
            n = n/10;
        }
        
        if(y == to_string(x))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
