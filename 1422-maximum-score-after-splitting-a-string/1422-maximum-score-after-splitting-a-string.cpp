class Solution {
public:
    int maxScore(string s) {
        int n = s.size(), ans = 0;
        vector<int> zeros(n-1);
        vector<int> ones(n-1);

        int count = 0;
        for(int i = 0; i< n - 1 ; i++){
            if(s[i] == '0'){
                count++;
            }
            ones[i] = count;
        }

        count = 0;
        for(int i = n-1; i>= 1 ; i--){
            if(s[i] == '1'){
                count++;
            }
            zeros[i-1] = count;
        }

        for(int i = 0; i< n-1 ; i++){
            ans = max(ans, zeros[i] + ones[i]);
        }

        return ans;
    }
};