class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char ,int>m;
        for(int i=0 ;i<s.size() ;i++)
        {
            m[s[i]]++;
        }
        for(int i=0 ;i<s.size() ;i++)
        {
            if(m[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};
// time complexity : O(n).
// space complexity : as unordered map is used since only alphabets are inserted therefor max of 26 alphabets can be taken so it had a SC of O(1) .
