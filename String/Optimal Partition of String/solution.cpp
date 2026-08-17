class Solution {
public:
    int partitionString(string s) {
        int count=1;
        string ans;
        ans += s[0];
        for(int i=1;i<s.size() ;i++)
        {
            if(ans.find(s[i]) != string::npos)
            {
                count++;
                ans.clear();
                ans += s[i];
            }
            else
            {
                ans += s[i];
            }
        }
        return count;
    }
};
