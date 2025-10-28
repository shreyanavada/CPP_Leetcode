class Solution {
public:
    int subtractProductAndSum(int n) {
        string str = to_string(n);
        int sum = 0;
        int prod = 1;
        
        for( int i = 0; i < str.size(); i++ )
        {
            sum += str[i]-'0';
            prod *= str[i]-'0';
        }
        return prod - sum;
        
    }
};
