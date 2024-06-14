class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int>mp;
        int n=nums.size();

        
        for(auto x: nums)
        {
            mp[x]++;
        }
        
        for(auto y:mp)
        {
            if(y.second>=2)
                return true;
        }
        
        return false;
    }
};