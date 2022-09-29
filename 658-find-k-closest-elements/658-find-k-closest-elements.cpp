class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        stable_sort(begin(arr), end(arr), [x](const auto a, const auto b){
            return abs(a - x) < abs(b - x);   
        });
        arr.resize(k);                        
        sort(begin(arr), end(arr));          
        return arr; 
    }
};