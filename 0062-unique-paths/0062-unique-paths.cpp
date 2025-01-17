class Solution {
public:
    int dp[1001][1001];
    
    int solve(int i, int j , int m , int n)
    {
        if(i<0 ||i>=m ||j<0 || j>=n)
            return 0;
        if(i==m-1 &&j==n-1)
            return dp[i][j]=1;
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int right=solve(i,j+1,m,n);
        int down=solve(i+1,j,m,n);
        return dp[i][j]=right+down;
        
        
        
    }
    int uniquePaths(int m, int n) {
   memset(dp, -1, sizeof(dp));
        return solve(0,0, m,n);
        
    }
};