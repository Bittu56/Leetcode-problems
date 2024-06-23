class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int oddcount=0;
        int n=nums.size();
        int ans=0;
        
        map<int,int>mp;
        mp[oddcount]=1;
        
    for(int i=0;i<n;i++)
    {
       oddcount+=nums[i]%2;
        
        if(mp.count(oddcount-k))
        {
            ans+=mp[oddcount-k];
        }
        
        mp[oddcount]++;
    }
        
        return ans;
        
    }
};