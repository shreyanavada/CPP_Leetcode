class Solution {
public:
    int appendCharacters(string s, string t) {
        if(s.find(t) != string::npos)
        {
            return 0;
        }
       int pt1 =0 , pt2= 0;
       while(pt1<s.size() && pt2<t.size())
       {
        if(s[pt1] == t[pt2])
        {
            pt1++;
            pt2++;
        }
        else
        {
            pt1++;
        }
       }
       return t.size()-pt2;
    }

};
