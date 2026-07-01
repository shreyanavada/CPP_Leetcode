class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int ptr=1;
        vector<int>ans;
        while(ptr < height.size())
        {
            if(height[ptr-1] > threshold)
            {
                ans.push_back(ptr);
            }
            ptr++;
        }
        return ans;
    }
};
