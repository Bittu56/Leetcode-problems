class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int> maxright(n);
        
        maxright[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            maxright[i]=max(maxright[i+1],nums[i]);
        }
        
        int i=0;// nums pointer 
        int j=0;// maxright pointer
        int ramp=0;
        
        while(j<n)
        {
            if(maxright[j]<nums[i])
            {
                i++;
            }
            
            else
                ramp=max(ramp,j-i);
            j++;
        }
        
        
        return ramp;
        
    }
};