class Solution {
public:
    int hrob(vector<int>& nums, int s, int e){
        int n = e - s;
        if(n == 1)
            return nums[0+s];
        if(n==2)
            return max(nums[0+s], nums[1+s]);
        int dp[n];
        dp[0] = nums[0+s];
        dp[1] = max(nums[0+s],nums[1+s]);
        cout<< dp[0]<<" " <<dp[1]<<" ";
        for(int i=2; i < n; i++){
            dp[i] = max(nums[i+s] + dp[i-2],dp[i-1]);
        }
        cout<<endl;
        return dp[n-1];
    }
    
    int deleteAndEarn(vector<int>& nums) {
        vector<int> a(10001,0);
        int max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            a[nums[i]] += nums[i];
            if(max < nums[i])
                max = nums[i];
        }
        
        if(nums.size()==1){
            return nums[0];
        } else {
            return hrob(a,0,max+1);
        }
    }
};