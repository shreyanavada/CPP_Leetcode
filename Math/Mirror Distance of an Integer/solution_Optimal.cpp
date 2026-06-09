class Solution {
public:
    int mirrorDistance(int n) {
        string s;
        int m;
        int p = n;
        while(n>0)
        {
            s += to_string(n%10);
            n = n/10;
        }
         m = stoi(s);
        return abs(p-m);
        
    }
};
