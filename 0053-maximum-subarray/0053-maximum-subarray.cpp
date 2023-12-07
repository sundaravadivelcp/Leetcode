class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0],maxSum = nums[0];

        for(int i = 1; i<nums.size(); i++){
            int num = nums[i];
            curSum = max(num, num +curSum);
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};