class Solution {
public:
    int minCost(vector<vector<int>>& matrix) {
        int m = matrix.size();
        vector<int> dp(3);
        vector<int> row(3);

        for(int i = 0; i<3; i++){
            dp[i] = matrix[0][i];
        }

        for(int i = 1; i < m; i++){
            for(int j = 0; j < 3; j++){
                int prev = INT_MAX;
                if(j==0){
                    row[j] = min(dp[j+1], dp[j+2]) + matrix[i][j];
                } else if(j == 2){
                    row[j] = min(dp[j-2], dp[j-1]) + matrix[i][j];
                } else {
                    row[j] = min(dp[j-1], dp[j+1]) + matrix[i][j];
                }
            }
            dp = row;
        }

        return min(dp[0], min(dp[1], dp[2]));
        
    }
};