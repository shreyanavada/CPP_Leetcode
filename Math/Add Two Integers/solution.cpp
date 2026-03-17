class Solution {
public:
    int sum(int num1, int num2) {
        int ans;
        if(num1 >=0 && num2 >=0)
        {
            return num1+num2;
        }
        else if(num1<0 && num2>=0)
        {
            return num1+num2;
            
        } 
        if(num1 >=0 && num2 <0)
        {
            return num1+num2;
        }
        else if(num1<0 && num2<0)
        {
            return num1+num2;
        }

        return 0;
        
    }
};
