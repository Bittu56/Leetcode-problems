class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       sort(tokens.begin(),tokens.end());
        
        int i=0;int j = tokens.size();int n=tokens.size();
        while(i<j)
        {
            if(power>=tokens[i])
                power-=tokens[i++];
            else if(i-( n-j ) && j > i+1)
            {
                power+=tokens[--j];
                
            }
            else
                break;
        }
        
    return i-(n-j);
    }
};
