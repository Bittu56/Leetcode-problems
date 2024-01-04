class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
       for(auto num : nums)
       {
           mp[num]++;
       }
        
        int ans=0;
        
    for(auto &itr :mp)
    {
        if(itr.second ==1)
            return -1;
            ans+=itr.second/3;
        if(itr.second%3)
        {
            ans++;
        }
        

    }
        return ans;
    }
};