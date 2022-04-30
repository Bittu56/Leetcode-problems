class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        
        vector<vector<int>>merged;
        
        if(intervals.size()==0)
            return merged;
        sort(intervals.begin(),intervals.end());
        vector<int> temp= intervals[0];
        
        for(auto itr:intervals)
        {
            if(itr[0]<=temp[1])
            {
                temp[1]=max(itr[1],temp[1]);
                temp[0]=min(itr[1],temp[0]);
            }
            else
            {
                merged.push_back(temp);
                temp=itr;
            }
        }
        
        merged.push_back(temp);
        return merged;
        
        
    }
};