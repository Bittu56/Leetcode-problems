class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        int curr_sum=0;
        mp[0]++;
        
        for(auto x:nums)
        {
            curr_sum+=x;
            int mod=(curr_sum % k+k)%k;
            
            if(mp.find(mod)!=mp.end())
            {
                ans+=mp[mod];
            }
            mp[mod]++;
            
        }
        return ans;
        
        
        
    }
};