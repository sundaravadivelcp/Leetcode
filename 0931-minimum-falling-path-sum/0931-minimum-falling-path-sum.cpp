class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<char> dir = {-1,0,1};
        vector<int>dp (n);

        for(int i = 0; i<n; i++){
            dp[i] = matrix[0][i];
        }

        for(int i = 1; i < n; i++){
            vector<int> row(n);
            for(int j = 0; j < n; j++){
                int prev = INT_MAX;
                for(int k = 0; k < 3; k++){
                    int idx = dir[k]+j;
                    if(idx >= 0 && idx < n){
                        prev = min(prev, dp[idx]);
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