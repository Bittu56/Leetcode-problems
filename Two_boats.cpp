class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        sort(people.begin(), people.end());
        int k=people.size()-1;
        int i=0;
        
        while(i<=k)
        {
            if(people[i]+people[k]<=limit)
            {
                i++;
                k--;
            }
            else
                k--;
            
            count++;
        }
        
        return count;
    }
};