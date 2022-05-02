class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int size1=nums.size();
        int k=size1/2;
        int k1=0;
        map<int,int>mp;
        if(nums.size()==1)
        {
            k1=1;
        }
        
        for(int i=0;i<size1;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto &ref:mp)
        {
            if(ref.second>k)
            {
                 k1=ref.first;
            }
        }
     return k1;   
    }
};