class Solution {
public:
    
    vector<int> checkfreq(string & str)   /// frequency find string and return only frequency
    {
        vector<int> freq(26);
        
        for(auto &ref:str)
        {
            freq[ref-'a']++;
            
        }
        return freq;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    
    vector<string>ans;
    vector<int>maxfreq(26);
        
        for(auto &ref: words2)
        {
           vector<int>freq= checkfreq(ref);
          for(int i=0;i<26;i++)
         maxfreq[i]=max(freq[i],maxfreq[i]);
        }
        
        for(auto &ref:words1)
        {
            vector<int> freq= checkfreq(ref);
        int i =0;
            for(;i<26;i++)
            {
                if(freq[i]<maxfreq[i])
                    break;
            }
            
            if(i==26)ans.push_back(ref);
        }
        return ans;
    }
};
        
        
        
   
        
        
        
        
    