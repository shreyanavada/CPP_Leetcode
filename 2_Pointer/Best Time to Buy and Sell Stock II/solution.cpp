class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = INT_MAX;
        int p1 =0 , p2 = 1 ;

        while(p1 <prices.size() && p2<prices.size())
        {
            mini = min(mini ,prices[p1]);
            if(prices[p2]-mini >= 0)
            {
                profit += prices[p2]-mini;
                mini = INT_MAX;
            }
            p1++ ; p2++ ;
        }
        return profit;
    }
};
