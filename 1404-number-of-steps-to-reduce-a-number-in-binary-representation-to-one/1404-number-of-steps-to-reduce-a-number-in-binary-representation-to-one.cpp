class Solution {
public:
    int numSteps(string s) {
         int steps=0;
        while(s.size()>1)
        {
            if(s.back()=='0')
            {
                s.pop_back();
                steps++;
                
                continue;
            }
            bool check=false;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='0')
                {
                    s[i]='1';
                    check=true;
                    break;
                }
                s[i]='0';
            }
            if(!check)
                s="1"+s;
            steps++;
        }
        return steps;
    }
};