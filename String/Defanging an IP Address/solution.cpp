class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for(int i=0 ;i<address.size() ;i++)
        {
            if(isdigit(address[i]))
            {
                str += address[i];
            }
            else
            {
                str +="[.]";
            }
        }
        return str;
    }
};
