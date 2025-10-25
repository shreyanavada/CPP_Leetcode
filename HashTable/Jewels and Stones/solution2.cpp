//using hash_map: unordered map .
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        int count=0;
        for(int i=0 ; i<jewels.size() ;i++) // putting all the chars of jewels into a map .
        {
            m[jewels[i]]=0;
        }
        for(int i=0 ;i<stones.size() ;i++) // iterating through a stones and checking if the char is present in map or not . 
        {
            if(m.count(stones[i]))
            {
                count++;
            }
        }
        return count;
    }
};
