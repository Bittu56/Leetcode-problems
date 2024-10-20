class Solution {
public:
    bool parseBoolExpr(string expression) {
    int n = expression.size();
    stack<char> st;

    for(auto c: expression){
        if(c == ',' || c == '(') continue;
        if(c == ')'){
            int t = 0;
            int f = 0;
            while(st.top() == 't' || st.top() == 'f'){
                if(st.top() == 't')
                    t = 1;
                else
                    f = 1;
                st.pop();
            }

            char op = st.top();
            st.pop();

            if(op == '&'){
                if(f) st.push('f');
                else st.push('t');
            }
            else if(op == '!'){
                if(t) st.push('f');
                else st.push('t');
            }
            else if(op == '|'){
                if(t) st.push('t');
                else st.push('f');
            }
        }
        else st.push(c);
    }

    return (st.top() == 't');
}
};