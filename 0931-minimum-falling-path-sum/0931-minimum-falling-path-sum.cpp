class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> dp(n);
        vector<int> row(n);

        for(int i = 0; i<n; i++){
            dp[i] = matrix[0][i];
        }

        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                int prev = INT_MAX;
                if(j==0){
                    row[j] = min(dp[j], dp[j+1]) + matrix[i][j];
                } else if(j == n-1){
                    row[j] = min(dp[j], dp[j-1]) + matrix[i][j];
                } else {
                    row[j] = min(dp[j], min(dp[j-1], dp[j+1])) + matrix[i][j];
                }
            }
            dp = row;
        }

        int ans = INT_MAX;
        
        for(int i = 0; i<n; i++){       
            ans = min(ans, dp[i]);
        }

        return ans;

    }
};