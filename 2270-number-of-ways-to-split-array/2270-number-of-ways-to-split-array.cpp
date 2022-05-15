class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0, lsum=0,rsum=0;
        
        //calculate sum of all values in nums
        for(auto i:nums){
            sum+=i;
        }
        
        int n=nums.size(),res=0;
    
        for(int i=0;i<n;i++){
            lsum+=nums[i];//calculate left sum
            
            rsum=sum-lsum;//calculate right sum
            
            if(i<n-1 && lsum>=rsum){
                // increment result if there is atleast 
                //one element after i and left sum is 
                //greater than equal to right sum
                res++; 
            }
        }
        return res;
    }
};