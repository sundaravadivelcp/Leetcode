class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), repeatingNumber, missingNumber;
        for(int i = 0;i<n; i++){
            if(nums[abs(nums[i]) - 1] < 0){
                repeatingNumber = abs(nums[i]);
            }else {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        for(int i = 0;i<n; i++){
            if(nums[i] > 0){
                missingNumber = i + 1;
            }
        }

        return {repeatingNumber, missingNumber};
    }
};