class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX ;
        int max_profit =0;
        for(int i=0 ;i<prices.size() ;i++)
        {
            if(prices[i]<mini)
            {
                mini = prices[i];
            }
            else
            {
               max_profit =  max((prices[i]-mini) , max_profit);
            }
        }
        return max_profit ; 
        
    }
};
