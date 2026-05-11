class Solution {
public:
    string reverseByType(string s) {
        int start = 0 , end = s.size()-1 ;
        while(start < end )
        {
            if(isalpha(s[start]) && isalpha(s[end]))
            {
                swap(s[start] , s[end]);
                start++;
                end--;
            }
            else if(isalpha(s[start]) && !(isalpha(s[end])))
            {
                end--;
            }
            else if(!(isalpha(s[start])) && (isalpha(s[end])))
            {
                start++;
            }
            else{

            start++ ;
            end--;
            }
        }
        start = 0 , end = s.size()-1 ;
       
         while(start < end )
        {
            if(!(isalpha(s[start])) && !(isalpha(s[end])))
            {
                swap(s[start] , s[end]);
                start++;
                end--;
            }
            else if(isalpha(s[start]) && !(isalpha(s[end])))
            {
                start++;
            }
            else if(!(isalpha(s[start])) && (isalpha(s[end])))
            {
                end--;;
            }
            else{

            start++ ;
            end--;
            }
        }
        return s;
    }
};
