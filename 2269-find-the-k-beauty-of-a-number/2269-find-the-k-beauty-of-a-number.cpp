class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str=to_string(num);
        int ans=0;
        int n=str.length();
        for(int i=0;i<=n-k;i++)
        {
            if(stoi(str.substr(i,k))!=0)
            {
                 if(num % stoi(str.substr(i,k))==0) ans++;
            }
        }
        return ans;
        
    }
};