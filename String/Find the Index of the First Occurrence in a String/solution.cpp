class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        if(pos != string::npos)
        {
            return pos;
        }
        else
        {
            return -1;
        }
        
    }
};
// time complexity : O(n*m)  , n is the size of haystack and m is the size of needle . so find() acts as nested for loop in worst case . 
// Space complexity : O(1) .
