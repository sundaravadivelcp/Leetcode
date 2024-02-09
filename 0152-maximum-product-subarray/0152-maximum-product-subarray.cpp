class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        int min_so_far = nums[0], max_so_far = nums[0], result = nums[0];

        for(int i = 1; i<nums.size(); i++){
            int tempMax = max(nums[i], max(nums[i]* max_so_far, nums[i]* min_so_far));
            min_so_far = min(nums[i], min(nums[i]* max_so_far, nums[i]* min_so_far));

            max_so_far = tempMax;
            result = max(result, max_so_far);

        }

        return result;

    }
};