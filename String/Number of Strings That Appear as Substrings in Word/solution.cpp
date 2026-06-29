class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int total_substrings =0 ;
        for(int i=0 ; i<patterns.size() ;i++)
        {
            if(word.find(patterns[i]) != string::npos)
            {
                total_substrings++;
            }
        }
        return total_substrings;
        
    }
};
