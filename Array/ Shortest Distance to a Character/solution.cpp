class Solution {
public:
vector<int> shortestToChar(string s, char c) {
    int n = s.size();
    vector<int>arr; // to store the indices of the given char .
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            arr.push_back(i);
        }
    }
    int mini = INT_MAX;
    int ans;
    vector<int>answer; // the final array .
    for (int i = 0; i < n; i++)
    {
        mini = INT_MAX;
        for (int j = 0; j < arr.size(); j++)
        {
            ans = arr[j] - i;
            if (ans < 0)
            {
                ans = -(ans);
            }
            if (mini > ans)
            {
                mini = ans;
            }

        }
        answer.push_back(mini);
    }
    return answer;
}
};
//time complexity : O(n^2) .               space complexity : O(n) .
