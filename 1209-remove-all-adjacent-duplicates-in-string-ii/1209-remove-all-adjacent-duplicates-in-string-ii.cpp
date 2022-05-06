class Solution {
public:
    string removeDuplicates(string s, int k) {
        /*
        unordered_map<char,int>mp;
        unordered_map<char,int>res;
            string m="";
        int l=0;
            
            for(int i=0;i<s.length();i++)
            {
                mp[s[i]]++;
            }
        
      for(auto &ref:mp)
      {
          l=ref.second%k;
          
          for(int i=0;i<l;i++)
          {
              res.insert({ref.first,l});
          }
      }
        
        for(auto&ref :res)
        {
            for(int i=0;i<ref.second;i++)
            {
            m=m+ref.first;
            }
        }
        
        return (m);
        
    }
};*/
        
    
        int n = s.size();
        if(n<k) return s;
        
        stack<pair<char,int>> stk;
        for(int i=0; i<n; ++i){
            if(stk.empty() || stk.top().first != s[i]) stk.push({s[i],1});
            else{
                auto prev = stk.top();
                stk.pop();
                stk.push({s[i], prev.second+1});
            }
            if(stk.top().second==k) stk.pop();
        }
        
        string ans = "";
        while(!stk.empty()){
            auto cur = stk.top();
            stk.pop();
            while(cur.second--){
                ans.push_back(cur.first);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};