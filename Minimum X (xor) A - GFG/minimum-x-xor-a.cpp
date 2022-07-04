// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int countbetsetinb ; 
        
        int B = b;
        while(B)
        {   
            countbetsetinb+=B%2; 
            B/=2;
        }
        
        int noofbitstosetinx = countbetsetinb;
        int ans = 0;
        for(int i=31;i>=0 && noofbitstosetinx;i--)
        {
            if(a&(1<<i)) 
            {                  
                ans|=(1<<i); 
                noofbitstosetinx--; 
            }
            
        }
       
        for(int i=0;i<=31 && noofbitstosetinx;i++)
        {
            if((ans&(1<<i))==0)
            {ans|=(1<<i); 
                noofbitstosetinx--; 
            }
        }
       return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends