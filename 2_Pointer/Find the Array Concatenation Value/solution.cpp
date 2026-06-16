class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        int p1 =0 , p2 =nums.size()-1;
        string str;
        while(p1<=p2)
        {
            str.clear();
            if(p1==p2)
            {
                str += to_string(nums[p1]);
            }
            else
            {
           str = to_string(nums[p1]) + to_string(nums[p2]);
            }
            if(!(str.empty()))
            {
            sum += stoi(str);
            p1++,p2--;
            }

        }
        return sum;
    }
};
