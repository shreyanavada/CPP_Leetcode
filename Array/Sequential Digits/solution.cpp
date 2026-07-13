class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>a;
        int p1 ,p2;
        string str;
        bool ans;
        for(int i=low ;i<=high ;i++)
        {
            p1=0 ,p2=1;
            ans=false;
            str = to_string(i);
            while(p2<str.size())
            {
                if((str[p1]-'0')+1 ==(str[p2]-'0'))
                {
                    ans=true;
                    p1++ ,p2++;
                }
                else
                {
                    ans=false;
                    break;
                }
            }
            if(ans == true)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};
