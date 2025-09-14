class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>str;
        string s;
        vector<string>ans;
        string firstSec = first + " " + second;
        for(int i=0 ;i<text.size() ;i++)
        {
            if(text[i] != ' ')
            {
                s += text[i];
            }
            else
            {
                str.push_back(s);
                s.clear();
            }
        }
        str.push_back(s);
       for (int i = 0; i < str.size() - 2; i++) {
    if (str[i] == first && str[i + 1] == second)
        ans.push_back(str[i + 2]);
}
        return ans;
        
    }
};
