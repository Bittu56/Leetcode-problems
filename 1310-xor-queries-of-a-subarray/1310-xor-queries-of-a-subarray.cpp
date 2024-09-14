class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        int n= arr.size();
        vector<int> xor1(n, 0);
        xor1[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            xor1[i]=xor1[i-1]^arr[i];
        }
        
        vector<int>result;
        
        for(vector<int> &res: queries)
        {
            int L=res[0];
            int R=res[1];
            
            int p= xor1[R]^(L==0? 0 : xor1[L-1]);
            result.push_back(p);
        }
        return result;
        
    }
};