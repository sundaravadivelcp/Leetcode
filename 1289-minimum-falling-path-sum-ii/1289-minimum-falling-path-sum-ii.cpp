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
                for(int k = 0; k< n ; k++){
                    if(k!=j){
                        prev = min(prev, dp[k]);
                    }
                }
                row[j] = prev + matrix[i][j];
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