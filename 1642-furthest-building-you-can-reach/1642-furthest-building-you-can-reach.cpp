class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
            int i;
            
            priority_queue<int,vector<int>> pq;
            
            int difference;
            
            for (int i=0;i<heights.size()-1;i++)
            {
                difference =heights[i+1]-heights[i];
                if(difference>0)
                {
                    bricks-=difference;
                    pq.push(difference);
                   if(bricks<0)
                   {
                       
                       if(ladders <=0) return i;
                       bricks+=pq.top();
                       pq.pop();
                       ladders--;
                   }
                
                }
                
                }
            
            
            return i;
            
        }
    };
  