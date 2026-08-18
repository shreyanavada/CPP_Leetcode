class Solution {
public:
    int minChanges(string s) {
        int ans = 0;
        int ptr1 =0 ,ptr2 =1 ;
        while(ptr2 < s.size())
        {
            if(s[ptr1] != s[ptr2])
            {
               ans++;
            }
            ptr1 = ptr1+2;
            ptr2 = ptr2+2;
        }
        return ans;
        
    }
};
