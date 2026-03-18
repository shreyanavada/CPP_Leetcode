class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p=0;
        int n ;
        string ans;
        if(word1.size()>=word2.size())
        {
            n = word1.size();
        }
        else
        {
            n =  word2.size();
        }
        while(p<n)
        {
            if(p<word1.size())
            {
                ans += word1[p];

            }
            if(p< word2.size())
            {
                ans+= word2[p];
            }
            p++;
        }
        return ans;
    }
};
