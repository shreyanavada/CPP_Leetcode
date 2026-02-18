class Solution {
public:
    bool hasAlternatingBits(int n) {
        string remainder;
        while(n > 0)
        {
            remainder += to_string(n%2) ;
            n = n/2 ;
        }
        reverse(remainder.begin() , remainder.end());

        if(remainder[0]=='1')
        {
            for(int i=0 ;i<remainder.size() ;i++)
            {
                if(i%2 == 0)
                {
                    if(remainder[i] !='1')
                    {
                        return false;
                    }
                }
                else
                {
                    if(remainder[i] != '0')
                    {
                        return false;
                    }
                }
            }
        }
             if(remainder[0]=='0')
        {
            for(int i=0 ;i<remainder.size() ;i++)
            {
                if(i%2 == 0)
                {
                    if(remainder[i] !='0')
                    {
                        return false;
                    }
                }
                else
                {
                    if(remainder[i] != '1')
                    {
                        return false;
                    }
                }
            }
            
        }
        return true;
        }

    
    
};
