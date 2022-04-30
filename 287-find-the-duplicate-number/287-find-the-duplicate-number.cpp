class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp1;
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            mp1[nums[i]]+=1;
            
        }
        
        for(auto it:mp1)
        {
            if(it.second>1)
            {
              a= it.first;
            }
        }
        return a;
    }
};