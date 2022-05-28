class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n= nums.size();
        int sum1=n*(n+1)/2;
        int sum2=0;
        for(auto &ref:nums)
        {
            sum2+=ref;
        }
        
        int k=sum1-sum2;
        
    
    return k;
        
    }
};