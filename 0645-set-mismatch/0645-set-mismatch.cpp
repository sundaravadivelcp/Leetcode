class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), repeatingNumber, missingNumber;
        sort(nums.begin(), nums.end());
        int eSum = n*(n+1)/2;
        eSum -= nums[0];
        for(int i =1;i<n; i++){
            eSum -= nums[i];
            if(nums[i] == nums[i-1]){
                repeatingNumber = nums[i];
            }
        }
        missingNumber = eSum  + repeatingNumber;

        return {repeatingNumber, missingNumber};
    }
};