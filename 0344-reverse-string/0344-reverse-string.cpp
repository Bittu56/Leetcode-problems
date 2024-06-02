class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int left =0;
        int right= s.size()-1;
        char tmp=0;
        while(left<right)
        {
            tmp=s[left];
            s[left++]=s[right];
            s[right--]=tmp;
            
        }
        
        
    }
};