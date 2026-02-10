class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       // since the array is in increasing order , intution behind this :
      // if(summation > target) ---> have to move j and make i stay still . if we move j backwards it summation would decrease . if we move forward summation would increase.
      //if(summation < target) --->  move i and make j stay still .
        int n = numbers.size();
        int i=0;
        int j = n-1;
        vector<int>ans;
        while(i<n)
        {
            if(numbers[i]+numbers[j] > target)
            {
                j--;
            }
            else if(numbers[i]+numbers[j] < target)
            {
                i++;
            }
            else
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
        return ans;
    }
        
};
