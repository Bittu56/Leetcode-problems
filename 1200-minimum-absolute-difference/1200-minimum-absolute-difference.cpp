class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        int n = arr.size();

        sort(begin(arr), end(arr));
        int mind= INT_MAX;
        for(int i=1;i<n;i++)
        
        {
            mind=min(mind, arr[i]-arr[i-1]);
        }
        vector<vector<int>> ans;
        for(int i=1;i<n;i++)
    {
        int diff= arr[i]-arr[i-1]; // calculating difference
        if(diff== mind) // the time we get min difference
        ans.push_back({arr[i-1], arr[i]});
    }
    return ans;
    }
};