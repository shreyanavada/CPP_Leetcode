class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>h(26,0);
        string s = "balloon";
        int sum =0 ;
        for(int i=0 ;i<text.size() ;i++)
        {
            h[text[i]-'a']++;
        }
 return min({
            h['b' - 'a'],
            h['a' - 'a'],
            h['l' - 'a'] / 2,
            h['o' - 'a'] / 2,
            h['n' - 'a']}) ;
    

        
    }
}; 
