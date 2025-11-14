class Solution {
public:
bool isprime(int n)
{
    if(n==2)
    {
        return true;
    }
    if(n<2)
    {
        return false;
    }
    if(n%2 == 0)
    {
        return false;
    }
   
    for(int k =3 ;k*k<=n ;k=k+2)
    {
        if(n % k == 0)
        {
            return false;
        }
    }
    return true ;

        
}
    int countPrimeSetBits(int left, int right) {
       
       int remainder;
       int count=0;
       int countofprime=0;
       
        for(int i=left ;i<=right ;i++)
        {
            int n =i;
            count=0;
            while(n>0)
            {
                remainder = n%2;
                if(remainder == 1)
                {
                    count++;
                }
                n = n/2 ;
            }
            if(isprime(count))
            {
                countofprime++;
            }
        }
    
    
    return countofprime ;
    }

};
