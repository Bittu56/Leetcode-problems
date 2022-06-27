class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int Sum=0;
        vector<int>sum(cardPoints.size(),0);
        
        int ans=0;
        int score=0;
        for(int i=0;i<cardPoints.size();i++)
        {
            Sum+=cardPoints[i];
            sum[i]=Sum;
        }
        
        if(cardPoints.size()==k)
            return Sum;
        
        for(int i=0;i<=k;i++)
        { 
            int j=i+cardPoints.size()-k-1;
            if(i==0)
            ans=sum[j];
            else
            ans=sum[j]-sum[i-1];
            
            score=max(score,Sum-ans);
        }
        
        return score;
        
    }
};