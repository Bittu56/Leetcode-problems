class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> mp;
        
        for(auto &vec: edges)
        {
            int u=vec[0];
            int v=vec[1];
            mp[u]++;
            mp[v]++;
        }
        
        for(auto &itr:mp)
        {
            if(itr.second==edges.size())
            {
                return itr.first;
            }
        }
        
        return -1;
        
    }
};