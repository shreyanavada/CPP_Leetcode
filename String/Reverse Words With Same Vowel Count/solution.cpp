class Solution {
public:
    string reverseWords(string s) {
        vector<string>arr;
        string word;
        for(int i=0 ;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
            word += s[i];
            }
            else
            {
                arr.push_back(word);
                word.clear();
            }
        }
        arr.push_back(word);
        if(arr.size() ==1)
        {
            return arr[0];
        }
        int count0 = 0;
        int counti = 0;
        string ans;
        for(int i=0 ;i<arr.size() ;i++)
        {
            counti = 0;
            if(i==0)
            {
                for(int j=0 ;j<arr[0].size() ;j++)
                {
                    if(arr[0][j] =='a' ||arr[0][j] =='e' ||arr[0][j] =='i' ||arr[0][j] =='o' ||arr[0][j] =='u' )
                    {
                        count0++;
                    }
                }
                 ans += arr[i]+" ";
            }
            else
            {
                for(int j=0 ;j<arr[i].size() ;j++)
                {
                    if(arr[i][j] =='a' ||arr[i][j] =='e' ||arr[i][j] =='i' ||arr[i][j] =='o' ||arr[i][j] =='u' )
                    {
                        counti++;
                    }
                }
                if(counti == count0)
                {
                    reverse(arr[i].begin() , arr[i].end());

                }
                if(i==arr.size()-1)
                {
                    ans+= arr[i];
                    break;
                }
                ans += arr[i]+" ";


            }
        }

        return ans;

        
    }
};
