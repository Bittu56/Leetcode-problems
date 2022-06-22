class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int x=0;
        priority_queue<int>pq;
        
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(--k)
        {
            pq.pop();
        }
        
        int y=pq.top();
        return y;
        
    }
};