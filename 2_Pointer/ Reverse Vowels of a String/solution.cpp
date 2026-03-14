class Solution {
public:
//approach is two_pointer 
bool isVowel(char x)
{
    char y =tolower(x);
    if(y == 'a' || y == 'e' || y == 'i' || y == 'o' ||  y == 'u' )
    {
        return true ;
    }
    else
    {
        return false;
    }
}
    string reverseVowels(string s) {
        int start = 0 ;
        int end = s.size()-1 ; 
        while(start <= end)
        {
            if(isVowel(s[start]) && isVowel(s[end]))
            {
                swap(s[start] , s[end]);
                start ++;
                end--;
            }
            else if(isVowel(s[start]) && (!(isVowel(s[end]))))
            {
                end--;
            }
            else if((!(isVowel(s[start])) && isVowel(s[end])))
            {
                start++;
            }
            else
            {
                start++;
                end--;
            }
        }
        return s;

        
    }
};
