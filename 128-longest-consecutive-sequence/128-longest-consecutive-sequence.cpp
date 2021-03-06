class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        set<int>hashset;
        
        for(int num:nums)
        {
            hashset.insert(num);
        }
        int longest=0;
        
        for(int num:nums)
        {
            
        if(!hashset.count(num-1))
        {
            int currnum=num;
            int currstr=1;
            while(hashset.count(currnum+1))
            {
                 currnum+=1;
                 currstr+=1;
            }
            longest=max(longest,currstr);
        
          }
        }
        return longest;
        
    }
};