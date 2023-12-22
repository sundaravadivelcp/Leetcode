class Solution {
public:
    int maxScore(string s) {
        int best = INT_MIN;
        
        int zeros = 0, ones = 0;

        for(int i  = 0; i< s.size() - 1; i++){
            if(s[i] == '0'){
                zeros++;
            } else {
                ones++;
            }
            best = max(best, zeros - ones);
        }
        if(s[s.size() - 1] == '1'){
            ones++;
        }

        return best + ones;
    }
};