class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeatingNumber, missingNumber;
        for(int i = 0;i<nums.size(); i++){
            if(nums[abs(nums[i]) - 1] < 0){
                repeatingNumber = abs(nums[i]);
            } else {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        for(int i = 0;i<nums.size(); i++){
            if(nums[i] > 0){
                missingNumber = i + 1;
            }
        }

        return {repeatingNumber, missingNumber};
    }
};