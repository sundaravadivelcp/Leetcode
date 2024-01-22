class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), repeatingNumber, missingNumber;
        sort(nums.begin(), nums.end());
        int eSum = n*(n+1)/2, aSum = nums[0];
        for(int i =1;i<n; i++){
            aSum += nums[i];
            if(nums[i] == nums[i-1]){
                repeatingNumber = nums[i];
            }
        }
        missingNumber = eSum - aSum + repeatingNumber;

        return {repeatingNumber, missingNumber};
    }
};