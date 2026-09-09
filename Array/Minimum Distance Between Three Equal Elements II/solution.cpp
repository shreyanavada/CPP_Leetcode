// dabba problem everrr
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        int distance;
        int min_distance =INT_MAX;
        for(int i=0 ;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }

        for(auto it:m)
        {
            if(it.second.size() >= 3)
            {
               
                             for (int i = 0; i <= it.second.size() - 3; i++) {
                     distance = 2 * (it.second[i + 2] - it.second[i]);
                    min_distance = min(min_distance, distance);
                }
                       
                    }
                }
                
            
        
        if (min_distance == INT_MAX)
        {
            return -1;
        }
        else
        {
            return min_distance;
        }
    
        
    }
};
