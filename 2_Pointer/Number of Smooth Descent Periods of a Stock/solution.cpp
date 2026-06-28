class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        if(prices.size() == 1)
        {
            return prices.size();
        }
         long long p1 = 0 , p2 = 1;
         long long smooth_stock =0 ;
         long long counter =1 ;
        while(p1<prices.size()-1 )
        {
            if(p2==prices.size())
            {
                p1++;
                p2=p1+1;
                counter =1 ;
                if(p2 == prices.size())
                {
                    break;
                }

            }
            
           if(prices[p1] == prices[p2] + counter)
           {
                smooth_stock++;
                p2++;
                counter++;
           }
           else
           {
            counter=1;
            p1++;
            p2 = p1+1;
           }
        }
        return smooth_stock + prices.size();

        
    }
};
