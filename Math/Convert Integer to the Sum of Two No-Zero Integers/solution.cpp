class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
    int b;
    vector<int>ans;
    bool keep_b = true; // keep tracks of integer b .
    bool keep_a = true; // keep tracks of integer a .

    for (int i = 1; i < n; i++)
    {
        keep_b = true;
        keep_a = true;
        b = n - i;
        string str_b = to_string(b);
        for (int i = 0; i < str_b.size(); i++) // check whether there are any 0's in b integer .
        {
            if (str_b[i] == '0')
            {
                keep_b = false;
                break;
            }
        }
        string str_a = to_string(i);
        for(int i=0 ;i<str_a.size() ;i++)  // check whether there are any 0's in a integer .
        {
            if(str_a[i] == '0')
            {
                keep_a = false;
                break;
            }
        }
        if (keep_b == true && keep_a==true)
        {

            ans.push_back(b);
            ans.push_back(i);
            break;
        }
    }
    return ans;
}
};
