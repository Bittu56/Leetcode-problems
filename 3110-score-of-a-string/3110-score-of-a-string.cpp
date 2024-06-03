class Solution {
public:
    int scoreOfString(string s) {
        
        int res=0;
    for(int i=0;i<s.length()-1;i++){
            res +=abs(int(s[i])- int(s[i+1]));
        }
        return res;
        
    }
};