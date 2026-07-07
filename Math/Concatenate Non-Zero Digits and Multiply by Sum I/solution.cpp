class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)
        {
            return 0;
        }
        long long ans;
        string str = to_string(n);
        string x;
        for(int i=0 ;i<str.size() ;i++)
        {
            if(str[i] != '0')
            {
                x += str[i];
            }
        }
        ans = stoi(x);
        int sum = 0;
        for(int i=0 ;i<x.size() ;i++)
        {
            sum += (x[i]-'0');
        }
        return sum*ans;


        
    }
};
