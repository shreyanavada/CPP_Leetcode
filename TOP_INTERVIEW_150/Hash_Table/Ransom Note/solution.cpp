class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int>arrransom(26,0);
        vector<int>arrmaga(26,0);

        for(int i=0 ;i<ransomNote.size() ;i++)
        {
            arrransom[ransomNote[i]-'a']++;
        }

        
        for(int i=0 ;i<magazine.size() ;i++)
        {
            arrmaga[magazine[i]-'a']++;
        }

         for(int i=0 ;i<ransomNote.size() ;i++)
         {
            if(arrransom[ransomNote[i]-'a'] > arrmaga[ransomNote[i]-'a'])
            {
                return false;
            }
         }
         return true;

        
    }
};
