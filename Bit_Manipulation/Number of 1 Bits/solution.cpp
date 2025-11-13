class Solution {
public:
    int hammingWeight(int n) {
        int remainder;
        string bit_str;
        while(n>0)
        {
            remainder = n % 2 ;
            bit_str += to_string(remainder) ;
            n = n/2 ;
        }
        reverse(bit_str.begin() , bit_str.end());
        int count1s=0;
        for(int i=0 ;i<bit_str.size() ;i++)
        {
            if(bit_str[i] == '1')
            {
                count1s++;
            }

        }
        return count1s ;
        
    }
};
// time complexity : O(logn) because n keeps on dividing by 2 , better than O(n) .
