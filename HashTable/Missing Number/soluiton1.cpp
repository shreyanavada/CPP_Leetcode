// its time complexity is very much so just review this ....
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0 ;i<=n ;i++)
        {
            m[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i]))
            {
                m[nums[i]]=1;
            }

        }
        for(int i=0 ;i<=n ;i++)
        {
            if(m[i]==0)
            {
                return i ;
            }
        }
        return 0;
  

    }
};
