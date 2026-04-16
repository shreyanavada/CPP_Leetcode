class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        string word;
        vector<string>ans;
        for(int i=0 ;i<words.size() ;i++)
        {
            word.clear();
            string innerWord = words[i];
            for(int j=0 ;j<innerWord.size() ;j++)
            {

            
            if(innerWord[j] != separator)
            {
                word += innerWord[j];
            }
            else
            {
                ans.push_back(word);
                word.clear();
            }

            
            if(j == innerWord.size()-1 )
            {
                ans.push_back(word);
            }
            }
        }
        return ans;
        
    }
};
