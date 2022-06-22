class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long temp=0;
        if(n<0){
            return false;
        } else if(n<10 && n>=0){
            return true;
        } else {
            while(n>0){
                int t = n%10;
                temp = temp*10 +t;
                n /= 10;
            }
            if(temp == x){
                return true;
            }
            return false;
        }
    }
};