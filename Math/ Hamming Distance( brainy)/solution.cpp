class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x^y;
        int count = 0;
        int remainder;
        string binary;
        while(ans>0)
        {
            remainder = ans%2;
            binary += to_string(remainder);
            ans = ans/2;
        }
        reverse(binary.begin() , binary.end()) ;
        for(int i=0 ;i<binary.size() ;i++)
        {
            if(binary[i]== '1')
            {
                count++;
            }
        }
        return count ; 
    }
};
