class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.length();
        int count = 0;

        int i = 0;
        while(i < n) {
            if(s[i] == '1') {
                count++;
                while(i < n && s[i] == '1')
                    i++;
            } else {
                i++;
            }

            if(count > 1)
                return false;
        }
        
        return true;
    }
};
