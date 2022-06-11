class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sums=0;
        int n=nums.size();
        
    for(int i=0;i<nums.size();i++)
    {
        sums+=nums[i];
    }
       int target=sums-x;
        
        
        int start_idx=0, curr_sum=0;
        int max_len=0;
        bool found=false;
        for(int end_idx=0;end_idx<n;end_idx++)
        {
            curr_sum+=nums[end_idx];
            
            while(start_idx <= end_idx && curr_sum > target)
            {
                curr_sum-=nums[start_idx];
                start_idx++;
            }
            
            if(curr_sum==target)
            {  found=true;
                max_len=max(max_len,end_idx-start_idx+1);
            }
        }
            
            
            if(found)
                return n-max_len;
               return -1;
        }
    };
            
    