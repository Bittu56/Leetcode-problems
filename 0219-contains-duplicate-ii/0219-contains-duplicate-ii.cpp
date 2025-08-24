class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        for(int i = 0; i<nums.size(); i++) {
            
            if(mp.find(nums[i]) != mp.end() &&  //check if present in map and abs(i-j) <= k
               abs(mp[nums[i]] - i) <= k)
                return true;
            else
                mp[nums[i]] = i; //{number, index}
            
        }
        
        return false;
    }
};