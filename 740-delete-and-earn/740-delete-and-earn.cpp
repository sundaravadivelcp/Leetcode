class Solution {
public:
    int dp[10001];
    
    int deleteAndEarn(vector<int>& nums) 
    {
        memset(dp, 0, sizeof dp);
        vector<int> sum(10001, 0);
        for(auto num : nums) sum[num] += num;
        
        dp[1] = sum[1];
        
        for(int i=2; i<sum.size(); i++)
            dp[i] = max(sum[i] + dp[i-2], dp[i-1]);

        return dp[sum.size()-1];
    }
};