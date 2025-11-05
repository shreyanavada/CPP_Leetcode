class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int remainder;
        
        int count=0;
        ans.push_back(0);
        int temp;
        for(int i=1 ;i<=n ;i++)
        {
            temp=i;
            while(temp>0)
            {
                remainder = temp % 2 ;
                if(remainder == 1)
                {
                    count++;
                }
                temp = temp/2 ;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};
