class Solution {
public:
   bool isPowerOfFour(const int& num) {
	return num > 0 && (num & (num - 1)) == 0 && (num %3==1);
}
};