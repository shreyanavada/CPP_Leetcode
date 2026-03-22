class Solution {
public:
    char findTheDifference(string s, string t) {
        string ans = s+t;
        char x=0;
        for(int i= 0; i<ans.size() ;i++)
        {
            x = x^ans[i];
        }
        return x;
    }
};
