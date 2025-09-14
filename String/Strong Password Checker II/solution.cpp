class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool lengthh;
        bool upperCase=false;
        bool lowerCase=false;
        bool digits =false;
        bool special_char=false;
        if(password.size() >= 8)
        {
            lengthh = true ;
        }
        else
        {
            return false ;
        }
        for(int i=0 ;i<password.size()-1 ;i++)
        {
            if(password[i] == password[i+1])
            {
                return false;
            }
        }
        for(int i=0 ;i<password.size() ;i++)
        {
            if(isupper(password[i]) && !(upperCase))
            {
                upperCase = true;
            }
            else if(islower(password[i]) && !(lowerCase))
            {
                lowerCase = true ;
            }
            else if(isdigit(password[i]) && !(digits))
            {
                digits=true;
            }
            else if(password[i]=='!' || password[i]=='@'||password[i]=='#'||password[i]=='$' || password[i]=='%' ||password[i]=='^' || password[i]=='&'||password[i]=='*'||password[i]=='('|| password[i]=='-'||password[i]=='+'|| password[i]==')')
            {
                special_char=true;
            }
            if(upperCase == true &&  lowerCase==true && digits==true && special_char==true )
            {
                return true;
            }
            

        }
        return false;
        
    }
};
