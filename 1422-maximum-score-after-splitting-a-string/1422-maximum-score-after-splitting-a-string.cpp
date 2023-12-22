class Solution {
public:
    int maxScore(string s) {
        int n = s.size(), ans = 0;
        vector<int> zeros(n-1);
        vector<int> ones(n-1);

        int z = 0, o = 0;
        for(int i = 0; i< n - 1 ; i++){
            if(s[i] == '0'){
                z++;
            }
            ones[i] = z;
        }

        for(int i = n-1; i>= 1 ; i--){
            if(s[i] == '1'){
                o++;
            }
            zeros[i-1] = o;
        }

        for(int i = 0; i< n-1 ; i++){
            ans = max(ans, zeros[i] + ones[i]);
        }

        return ans;
    }
};