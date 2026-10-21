class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int prefix_sum =0;
        unordered_map<int,int>m;
        int longest = 0;
        for(int i=0 ;i<arr.size() ;i++)
        {
            prefix_sum += arr[i];
            if(prefix_sum == k)
            {
                longest = max(longest , i+1);
            }
            int ele = prefix_sum - k;
            if(m.count(ele))
            {
                longest = max(longest,i-m[ele]);
            }
            if(!(m.count(prefix_sum)))
            {
                m[prefix_sum] = i;
            }
            
        }
        return longest;
        
    }
};
