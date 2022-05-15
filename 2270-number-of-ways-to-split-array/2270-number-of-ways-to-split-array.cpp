class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        long long sum=0;
        long long lsum=0;
        long long rsum=0;
        int res=0;
        for(auto &i:nums)
        {
            sum=sum+i;
        }
        
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            lsum=lsum+nums[i];
        
            rsum=sum-lsum;
            
            if(i<n-1 && lsum>=rsum)
            {
                res++;
            }
            
        }
        return res;
        }
        
    };