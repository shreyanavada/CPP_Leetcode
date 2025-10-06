class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        int n;
        if(num<=9)
        {
            return num;
        }
        while(num > 9)
        {
            sum=0;
            while(num>0)
            {
                n=num%10;
                sum += n;
                num =num/10;
            }
            num=sum;
        }
        return sum;
    }
};
