class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<char> dir = {-1,0,1};
        vector<vector<int>>dp (n, vector<int>(n));

        for(int i = 0; i<n; i++){
            dp[0][i] = matrix[0][i];
        }

        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                int prev = INT_MAX;
                for(int k = 0; k < 3; k++){
                    int idx = dir[k]+j;
                    if(idx >= 0 && idx < n){
                        prev = min(prev, dp[i-1][idx]);
                    }
                }
                dp[i][j] = prev + matrix[i][j];
            }
        }

        int ans = INT_MAX;
        
        for(int i = 0; i<n; i++){       
            ans = min(ans, dp[n-1][i]);
        }

        return ans;

    }
};