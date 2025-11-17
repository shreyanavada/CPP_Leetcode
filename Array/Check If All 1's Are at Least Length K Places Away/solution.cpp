class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int distance = k;    
        bool ans = true;     

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (distance < k) { 
                    return false;   
                }
                distance = 0;       
            }
            else {
                distance++;          
            }
        }

        return ans;
    }
};
