class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
       unordered_map<char,int> mp;
        for(char c:s)
            mp[c]++;
        for(char c1:t)
        mp[c1]--;
        
        for(auto ref:mp)
        {
            if(ref.second)
                return false;
        }
        
        return true;
    }
};
            