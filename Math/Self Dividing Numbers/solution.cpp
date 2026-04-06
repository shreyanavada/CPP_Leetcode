class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        bool check = false ;
        for(int i=left ;i<=right ;i++)
        {
            check = false;
            int n = i ;
            while(n>0)
            {
                int k = n%10;
                if(k != 0)
                {
                if(i%k != 0)
                {
                    check = false;
                    break;
                   
                }
                else
                {
                    check = true;
                }
                
                
                }
                else
                {
                    check =false;
                    break;
                }
                n=n/10;
            }
            if(check)
            {
                ans.push_back(i);
            }
            
            
            
        }
        return ans;
        
    }
};
