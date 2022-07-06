class Solution {
public:
    int fib(int n) {
        int m=0;
        int k=1;
        int sum=0;
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        int p=2;
        if(n>=2)
        {
            while(p<=n)
            {   
                
                sum=m+k;
                m=k;
                k=sum;
                
               p++;       
    
             }
        }
        
        return sum;
    }
};