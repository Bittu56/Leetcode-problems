class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        
    int counter=k;
        while(q.size()>1)
        {
            int rank=q.front();
            q.pop();
            counter--;
            if(counter==0)
            {
                counter=k;
            }
            else
            {
                q.push(rank);
            }
        }
        
        
        return q.front();
    }
};