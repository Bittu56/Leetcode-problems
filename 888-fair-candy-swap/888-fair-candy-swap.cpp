class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) 
    {
    
	int sumA = accumulate(aliceSizes.begin(),aliceSizes.end(),0), sumB = accumulate(bobSizes.begin(), bobSizes.end(),0);
	int tmp = (sumB-sumA)/2;
	set<int> stA(aliceSizes.begin(),aliceSizes.end()),stB(bobSizes.begin(),bobSizes.end());
	for(auto &x:stA)
	  if(stB.find(x+tmp)!=stB.end()) return {x,x+tmp};
	return {0,0};
}
        
    
};