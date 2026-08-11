class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int mini= INT_MAX;
        int maxi=0;
        int ele;
        //vector<int>hash(26 ,0);

        for(int i=0 ;i<s.size();i++)
        {
            vector<int>hash(26 ,0);
            for(int j=i ;j<s.size() ;j++)
            {
                mini= INT_MAX;
                maxi =0;
                hash[s[j]-'a']++;
                
                for(int k=0 ;k<26;k++)
                {
                    if(hash[k] < mini && hash[k] != 0)
                    {
                        mini =hash[k];
                    }
                }
                for(int k=0 ;k<26;k++)
                {
                     if(hash[k] > maxi && hash[k] != 0)
                    {
                        maxi =hash[k];
                    }

                }
             ele= maxi-mini ;
             sum += ele ;

            }
        }
        return sum;

        
    }
};
