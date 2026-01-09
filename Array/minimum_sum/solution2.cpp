class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        string a1 ,a2;
        for(int i=0 ;i<s.size() ;i++)
        {
            
            if(i%2==0)
            {
            a1 += s[i];
            }
            else
            {
                a2 += s[i];
            }
        }
        return stoi(a1)+stoi(a2) ;
        
    }
};
