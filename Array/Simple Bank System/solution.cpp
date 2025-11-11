class Bank {
    int n= 0;
vector<long long>& balance;
public:
    Bank(vector<long long>& balance): balance(balance) {
         n = balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
         bool succes = false;
        if(account1<=n && account2<=n && money <=balance[account1-1])
        {
            balance[account2 - 1]= balance[account2 - 1]+money;
            balance[account1 - 1] = balance[account1 -1]-money;
            succes =true;
        }
        return succes;
    }
    
    bool deposit(int account, long long money) {
        bool  succes =false;
        if(account<=n )
        {
            balance[account - 1]=money+balance[account - 1];
             succes =true;
        }
        return  succes ;
    }
    
    bool withdraw(int account, long long money) {
        bool succes = false;
       if(account<=n && money<=balance[account - 1] )
       {
            balance[account - 1] = balance[account - 1] - money ;
             succes =true;
       }
       return  succes ;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
