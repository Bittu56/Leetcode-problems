class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        unordered_map<int, int> test;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++)
        {
            if(test.count(target-nums[i]))
            {
                res.push_back(test[target-nums[i]]);
                res.push_back(i);
                
                
            }
            
            test[nums[i]]=i;
        }
        
        return res;
    }
              
};