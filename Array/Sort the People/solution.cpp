class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = *max_element(heights.begin() , heights.end());
        vector<string>ans(n+1);
        vector<string>a;
        for(int i=0 ;i<heights.size() ;i++)
        {
            ans[heights[i]] = names[i];
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!="")
            {
            a.push_back(ans[i]);
            }
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
