class Solution {
public:
    int n;
    int dp[301];
    unordered_set<string>str;
    
    bool solve(int idx, string &s){
        if(idx==n)
            return true;
        if(dp[idx]!=-1)
            return dp[idx];
        if(str.find(s)!=str.end())
        {
            return dp[idx]=true;
        }
        for(int l=1;l<n;l++)
        {
            string temp=s.substr(idx,l);
            if(str.find(temp)!=str.end() && solve(idx+l,s))
                return dp[idx]=true;
        }
        
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.length();
memset(dp,-1,sizeof(dp));
        for(auto &ch:wordDict)
        {
            str.insert(ch);
        }
        
        return solve(0, s);
        
    }
};