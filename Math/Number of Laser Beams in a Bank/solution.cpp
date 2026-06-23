class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>arr;
        int count= 0;
        int sum =0 ;
        for(int i=0 ;i<bank.size() ;i++)
        {
            count=0;
            for(int j=0 ;j<bank[i].size() ;j++)
            {
                if(bank[i][j] == '1')
                {
                    count++;
                }
            }
            if(count!=0)
            {
            arr.push_back(count);
            }
            
        }
        int ptr1 =0 , ptr2 =1;
        while(ptr2<arr.size())
        {
            while(arr[ptr1] > 0)
            {
                sum += arr[ptr2];
                arr[ptr1]--;
            }
            ptr1++ , ptr2++;
        }
        return sum ;
        
    }
};
