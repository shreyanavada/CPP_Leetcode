class Solution {
public:
    int reverseDegree(string s) {
        int ans;
        int k;
        for(int i=0 ;i<s.size() ;i++)
        {
            k = i+1;
            ans += 26 - (s[i] - 'a' + 1) + 1; ;
        }
        return ans;
    }
};
