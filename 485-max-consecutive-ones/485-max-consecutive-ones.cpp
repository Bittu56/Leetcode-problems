class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0, mx = 0;
        for (auto num : nums) {
            if (num == 0) {
                mx = max(mx, ones);
                ones = 0;
            }
            else ones++;
        }
        return max(mx, ones);
    }
};