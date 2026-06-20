class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str;
        int ptr =0 ;
        int count=0;
        int i=0;
        while(ptr<s.size())
        {
         
            if(count!=spaces[i])
            {
                str += s[ptr];
                ptr++;
                count++;
            }
            else
            {
                str += " ";
                i++;
                if(i>=spaces.size())
                {
                    break;
                }

            }
        }
            for(int i=ptr ; i<s.size() ;i++)
            {
                str += s[i];
            }
        
        return str;
        
    }
};
