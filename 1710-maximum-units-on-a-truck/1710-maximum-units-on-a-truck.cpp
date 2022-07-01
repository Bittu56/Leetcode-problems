class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        priority_queue<pair<int,int>>pq;
        
        int count=0;
         int units=0;
        
        for(vector<int>x:boxTypes)
        {
            pq.push({x[1],x[0]});
        }
        while(count<truckSize && !pq.empty())
        {
            if(count+pq.top().second<truckSize)
            {
                units+=pq.top().second*pq.top().first;
                count+=pq.top().second;
                pq.pop();
            }
            else
            {
                
                int quantity=truckSize-count;
                units+=quantity*pq.top().first;
                count+=quantity;
            }
        }
        
        return units;
    }
};