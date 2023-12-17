class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        while(n){
          if(n%2){
            ans += (n-1)/2;
            if(n != 1)
              n++;
          } else{
            ans += n/2;
          }
          n/=2;
        }
        return ans;
    }
};