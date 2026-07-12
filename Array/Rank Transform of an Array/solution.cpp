class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0)
        {
            return arr;
        }
        int maxi = *max_element(arr.begin() , arr.end());
        vector<int>copy;
        vector<int>hash(maxi+1 ,0);
        int count =1;
        for(int i=0 ;i<arr.size() ;i++)
        {
            copy.push_back(arr[i]);
        }
        sort(copy.begin() , copy.end());
        vector<int>ans;
        for(int i=0 ;i<copy.size() ;i++)
        {
            if(hash[copy[i]] == 0)
            {
            hash[copy[i]] =count;
            count++;
            }
            
        }
        for(int i=0 ;i<arr.size() ;i++)
        {
            ans.push_back(hash[arr[i]]);
        }
        return ans;
    }
};
