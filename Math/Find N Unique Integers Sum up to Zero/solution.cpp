class Solution {
public:
    vector<int> sumZero(int n) {
        int sum = 0;
        vector<int>arr;
        int k =1 ;
        while(n>1)
        {
            arr.push_back(k);
            sum += k;
            k++;
            n--;
        }
        arr.push_back(-sum);
        return arr;

        
    }
};
