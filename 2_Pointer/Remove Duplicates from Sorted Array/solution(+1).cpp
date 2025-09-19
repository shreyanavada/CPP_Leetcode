class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>s;
        vector<int>arr;
        for(int i=0 ; i<nums.size() ;i++)
        {
            s.insert(nums[i]);
        }
        int k= s.size();
        for(int x:s)
        {
            arr.push_back(x);
        }
        for(int i=0 ;i<arr.size() ;i++)
        {
            nums[i]=arr[i];
        }
        return k;
        
    }
};
// time coplexity : O(nlogn)             space complexity : O(n) .
