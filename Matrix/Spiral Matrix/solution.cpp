class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0 ;
        int bot = matrix.size()-1;
        int left = 0 ;
        int right = matrix[0].size()-1;
        vector<int>arr;


        while(left <= right && top<=bot)
        {
            for(int i=left ;i<=right ;i++)
            {
                arr.push_back(matrix[left][i]);
            }
            top++;
            for(int i=top ;i<=bot;i++)
            {
                arr.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bot)
            {
            for(int i=right ;i>=left ;i--)
            {
                arr.push_back(matrix[bot][i]);
            }
            bot--;
            }
            if(left<=right)
            {
            for(int i= bot ; i>=top ;i--)
            {
                arr.push_back(matrix[i][left]);
            }
            left++;
            }
        }
        return arr;
    }
};
