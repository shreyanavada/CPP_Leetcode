class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> m;
        for(int i=0 ;i<s.size() ;i++)
        {
            m[s[i]]++ ;
        }

        vector<pair<char,int>> v(m.begin() ,m.end());
        sort(v.begin(), v.end(), [](pair<char,int>& a, pair<char,int>& b) {
             return a.second > b.second;
        });

        string ans;
        for(auto it :v)
        {
            for(int k = 1 ; k<=it.second ;k++)
            {
                 ans+=it.first;
            }
           
        }
        return ans;
        
    }
};
