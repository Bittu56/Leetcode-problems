class Solution {
public:
     int t[301][5001];
    int solve(int i,vector<int>& coins, int amount){
        int n=coins.size();
        if(i==n)
            return 0;
        if(t[i][amount]!=-1)
           {
               return t[i][amount];
           }
        if(amount==0)
            return 1;
        if(coins[i]>amount)
            return t[i][amount]=solve(i+1, coins,amount);
        int take=solve(i, coins,amount-coins[i]);
        int skip=solve(i+1,coins,amount);
        
        return t[i][amount]=take+skip;
        
    }
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        memset(t,-1, sizeof(t));
        return solve(0, coins,amount);
            
        
    }
};