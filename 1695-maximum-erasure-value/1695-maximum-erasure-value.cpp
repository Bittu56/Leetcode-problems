class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int curr_sum=0;
        int ans=0;
        int l=0,r=0;
        
        unordered_set<int>s;
        
        while(r<nums.size())
        {
            while(s.find(nums[r]) != end(s))
            {
              curr_sum-=nums[l];
              s.erase(nums[l++]);
            }
              curr_sum += nums[r], s.insert(nums[r++]);  
		ans = max(ans, curr_sum);                
	}
	return ans;
}
};