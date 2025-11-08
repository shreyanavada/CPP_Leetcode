// using hashtable method :
class Solution {
public:
    int minimizedStringLength(string s) {
        int arr[26]={0};
        int count =0;
        for(int i=0 ;i<s.size() ;i++)
        {
            int b = s[i] - 'a';
            arr[b ]++;

            if(arr[b] == 1)
                count++;
            
        }
        return count;
    }
};
