class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n =nums.size();
        int closestsum=1e7;
        int sum=0;
        sort(nums.begin(), nums.end());
        for(int k=0;k<=n-3;k++)
        {
            int i=k+1;
            int j=n-1;
            
            
            while(i<j){
                
                sum=nums[k]+nums[i]+nums[j];
                if(abs(target-sum)< abs(target-closestsum))
                {
                    closestsum=sum;
                }
                
                if(sum<target)
                {
                    i++;
                }
                else
                j--;
            }
        }
        
        
        return closestsum;
        
    }
};