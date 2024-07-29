class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int teams=0;
        int n=rating.size();
        
        for(int j=1;j<n-1;j++)
        {
            int countsmalleft=0;
            int countsmallright=0;
            int countlargeleft=0;
            int countlargeright=0;
           
            
            for(int i=0;i<j;i++)
            {
                if(rating[i]<rating[j])
                {
                    countsmalleft++;
                }
                else if (rating[i]>rating[j])
                {
                    countlargeleft++;
                }
            }
            
            for(int k=j+1;k<n;k++)
            {
                if(rating[k]<rating[j])
                {
                    countsmallright++;
                }
                else if (rating[k]>rating[j])
                {
                    countlargeright++;
                }
            }
            
            teams+=(countlargeleft*countsmallright)+(countlargeright*countsmalleft);
            
            
        }
        
        return teams;

        
    }
};