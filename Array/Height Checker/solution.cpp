class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr;
        int count=0;
        for(int i=0 ;i<heights.size() ;i++)
        {
            arr.push_back(heights[i]);
        }
        sort(arr.begin() ,arr.end());
        for(int i=0;i<arr.size() ;i++)
        {
            if(arr[i] != heights[i])
            {
                count++;
            }
        }
        return count ;
    }
};
