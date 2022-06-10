class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> Set;
        int start=0;
        int end=0;
        int max=0;
        
        while(start<s.size())
        {
            auto it= Set.find(s[start]);
            if(it==Set.end())
            {  
                if(start-end+1>max)
                {
                    max=start-end+1;
                }
            Set.insert(s[start]);
            start++;
            }
            
            else
            {   
                Set.erase(s[end]);
                end++;
            }
        }
        
        return max;
    }
};