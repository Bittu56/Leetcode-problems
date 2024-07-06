class Solution {
public:
    int passThePillow(int n, int time) {
        
        int timeleft=time% (n-1);
        int round= time/(n-1);
        if(round%2==0)
        {
            return 1+timeleft;
            
        }
        else
            return n-timeleft;
        
        
        return -1;
    }
};