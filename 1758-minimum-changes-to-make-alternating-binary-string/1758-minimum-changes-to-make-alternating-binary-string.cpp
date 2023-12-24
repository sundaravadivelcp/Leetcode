class Solution {
public:
    int minOperations(string s) {
        int m1 = 0, m2 = 0;
        int t = 0;
        for(char c:s){
            if(c == (t + '0')){
                m2++;
            } else {
                m1++;
            }
            t = (t + 1) % 2;
        }

        return min(m1,m2);
    }
};