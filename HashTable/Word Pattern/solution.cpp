class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>str;
        vector<string> seen;
        vector<string> hashTable(26,"");
        string s1;
        for(int i=0 ;i<s.size() ;i++)
        {
            if(isalnum(s[i]))
            {
                s1 += s[i];
            }
            else
            {
                str.push_back(s1);
                s1.clear();
            }
        }
        str.push_back(s1);

        if(str.size() != pattern.size()){
            return false;
        }

        unordered_map<string , string>m;
        for(int i=0 ; i<str.size() ;i++ )
        {
            char a = pattern[i];
            if(hashTable[a - 'a'] == ""){
                auto it = find(seen.begin(), seen.end(), string(str[i]));
                if(it == seen.end()){
                    hashTable[a - 'a'] = str[i];
                    seen.push_back(str[i]);
                }
                else {
                    return false;
                }
            }
            else if(hashTable[a - 'a'] != ""){
                if(hashTable[a - 'a'] != str[i]){
                    return false;
                }
            }
        }    
        return true;
    }
};
