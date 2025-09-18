// Same question been solved but without converting an int to a string . 
class Solution {
public:
    bool isPalindrome(int x) {
      int y; // to store the remainder value . 
      string str;
      string  num =to_string(x) ;
      if(x==0)
      {
        return true;
      }
      while(x>0)
      {
        y=x%10;
        x=x/10;
        str += to_string(y);
      }
      if(num==str)
      {
        return true;
      }
      else
      {
        return false;
      }

    }
};
