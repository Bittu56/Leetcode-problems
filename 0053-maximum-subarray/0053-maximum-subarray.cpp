class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        for(auto itr:nums)
        {
            sum+= itr;
            maxi=max(maxi,sum);
            if(sum<0)
            sum=0;
        }
        
        return maxi;
        
    }
};