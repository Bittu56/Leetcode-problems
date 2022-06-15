class Solution {
public:
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),sortbylength);
        unordered_map<string,int>dp;
        int ans=0;
        for(string word:words)
        {
            for(int i=0;i<word.length();i++)
            {
                string test=word.substr(0,i)+word.substr(i+1);
                
                dp[word]=max(dp[word],dp[test]+1);
            }
        
        
     ans=max(ans,dp[word]) ;
            
            }
        
        return ans;
    }
    
    static bool sortbylength(string& word1, string &word2)
    {
        return word1.length()< word2.length();
    }
};