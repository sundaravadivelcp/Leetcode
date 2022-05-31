class Solution {
public:
    int hrob(vector<int>& nums, int s, int e) {
        int n = e-s;
        if(n == 1)
            return nums[0+s];
        if(n ==2)
            return max(nums[0+s], nums[1+s]);
        
        int dp[n];
        dp[0] = nums[0+s];
        dp[1] = max(nums[0+s],nums[1+s]);
        
        for(int i=2; i < n; i++){
            dp[i] = max(nums[i+s] + dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        return max(hrob(nums,0,n-1),hrob(nums,1,n));
        
    }
};