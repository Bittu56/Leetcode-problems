class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& a) {
        int n=a.size();
        double mx=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if((a[i][0]*a[i][0]+a[i][1]*a[i][1])==mx){
                ans=max(ans,a[i][0]*a[i][1]);
            }
            if((a[i][0]*a[i][0]+a[i][1]*a[i][1])>mx){
                mx=a[i][0]*a[i][0]+a[i][1]*a[i][1];
                ans=a[i][0]*a[i][1];
            }
        }
        return ans;
    }
};