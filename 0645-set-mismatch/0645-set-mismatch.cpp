class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), repeatingNumber, missingNumber;
        sort(nums.begin(), nums.end());
        for(int i =1;i<n; i++){
            if(nums[i] == nums[i-1]){
                repeatingNumber = nums[i];
            }
        }

        return {repeatingNumber, repeatingNumber + 1};
    }
};