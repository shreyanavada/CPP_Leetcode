class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>arr(256,-1);
        int right = 0;
        int left = 0;
        int len ;
        int maxi = 0;
        while(right < s.size())
        {
            if(arr[s[right]] != -1)
            {
                if(left<=arr[s[right]])
                {
                    left = arr[s[right]]+1;
                }
            }
            arr[s[right]] = right ;
            len = right-left+1;
            if(maxi<len)
            {
                maxi = len;
            }
            right++;
        }
        return maxi;
        
    }
};
