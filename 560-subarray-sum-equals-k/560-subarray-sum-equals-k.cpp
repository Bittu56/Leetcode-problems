class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int i=0;
        int count=0;
        int curr_sum=0;
        int n=nums.size();
        
        if(nums.size()==0)
            return 0;
        unordered_map<int,int>mp;
        
        while(i<n)
        {
            curr_sum=curr_sum+nums[i];
            
            if(curr_sum==k)
            {
                count++;
            }
            
            if(mp.find(curr_sum-k)!=mp.end())
            {
                count+=mp[curr_sum-k];
            }
                mp[curr_sum]++;
                ++i;
                
            
        }
        return count;
    }
            
            
        };