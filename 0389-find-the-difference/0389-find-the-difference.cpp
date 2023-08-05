class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp;
        map<char, int>:: iterator itr;
        for(auto c:s)
        {
            itr=mp.find(c);
            if(itr!=mp.end())
            itr->second++;
            else
                mp.insert({c,1});
        }
        for(char d:t)
        {
            itr=mp.find(d);
            if(itr!=mp.end())
                itr->second--;
            else return d;
        }
        
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second!=0)
                return itr->first;
            
        }
        return 'a';
        
        
    }
};