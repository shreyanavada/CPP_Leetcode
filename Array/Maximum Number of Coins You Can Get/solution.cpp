class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin() , piles.end());
        reverse(piles.begin() ,piles.end());
        int p1 =1 , p2 = piles.size()-1;
        int total_sum = 0 ;
        while(p1<p2)
        {
            total_sum += piles[p1];
            p1 = p1+2;
            p2--;
        }
        return total_sum;
    }
};
