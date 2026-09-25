class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;           // Dont ask me , I somehow solved it
        vector<int>hash_arr(51);
        int sum =0 ;
        for(int i=0 ;i<A.size() ;i++)
        {
            if(A[i] == B[i])
            {
                sum += 1;
            }
            else
            {
            sum += hash_arr[A[i]]+hash_arr[B[i]];
            }
            ans.push_back(sum);
            
            if(hash_arr[A[i]] == 0)
            {
                hash_arr[A[i]] = 1;
            }
              if(hash_arr[B[i]] == 0)
            {
                hash_arr[B[i]] = 1;
            }
        }
        return ans;
    }
};
