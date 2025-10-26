class Bank {
public:
    vector<long long> balance;
    Bank(vector<long long>& balance) {
        this->balance = balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1>balance.size() or account2>balance.size()) return false;
        if(money>this->balance[account1-1]) return false;
        this->balance[account1-1]-=money;
        this->balance[account2-1]+=money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(account>this->balance.size()) return false;
        this->balance[account-1]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(account>this->balance.size()) return false;
        if(money>this->balance[account-1]) return false;
        this->balance[account-1]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */