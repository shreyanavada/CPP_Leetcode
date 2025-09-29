class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;  // ptr1
        int end=s.size()-1; // ptr 2
        while(start<=end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
        
    
};
