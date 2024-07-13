class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<int> laststack;
        string res;
        
        for(auto ch:s)
        {
            if(ch== '(')
            {
                laststack.push(res.length());
            }
            
            else if (ch == ')')
            {
                int l =laststack.top();
                laststack.pop();
                reverse(res.begin()+l, res.end());
                
            }
            else
                res+=ch;
        }
        
        
        return res;
    }
};