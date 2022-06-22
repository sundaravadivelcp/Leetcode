class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long int p;
        if(n>=0){
            p = n;
        } else {
            p = abs(n);
        }
        
        while(p>0){
            if(p&1){
                ans = ans*x;
            }
            x = x*x;
            p = p/2;
        }
        
        
        if(n<0){
            return 1/ans;
        } else{
            return ans;
        }
    }
};