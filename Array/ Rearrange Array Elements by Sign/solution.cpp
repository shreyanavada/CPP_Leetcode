// space complexity : O(n)            time complexity : O(n) .
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        for(int i=0 ;i<nums.size() ;i++)
        {
            if(nums[i] < 0)
            {
                neg.push_back(nums[i]);
            }
            else
            {
                pos.push_back(nums[i]);
            }
        }
        int p1 =0 , p2 =0 ;
        while(p1<pos.size() && p2<neg.size())
        {
            ans.push_back(pos[p1]);
            ans.push_back(neg[p2]);
            p1++;
            p2++;
        }
        return ans;
        
    }
};
