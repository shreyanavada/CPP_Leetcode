class Solution {
public:
    int minimumSum(int num) {
         int num1 ,num2;
        string s = to_string(num);
        vector<int>arr;
        for(int i=0;i<s.size();i++)
        {
            arr.push_back(s[i]-'0');
        }
        sort(arr.begin() , arr.end());
        string ss=to_string(arr[0])+to_string(arr[2]);
        string ss1=to_string(arr[1])+to_string(arr[3]);
        return stoi(ss)+stoi(ss1);
        
    }
};
