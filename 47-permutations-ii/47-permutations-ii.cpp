class Solution {
public:
   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(begin(nums), end(nums));
		vector<vector<int>>output;
        
        output.emplace_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            output.push_back(nums);
        }
        
        return output;
    }
};
        
        