class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        int min_so_far = nums[0], max_so_far = min_so_far, result = min_so_far;

        for(int i = 1; i<nums.size(); i++){
            int cur = nums[i];
            int tempMax = max(cur, max(cur* max_so_far, cur* min_so_far));
            min_so_far = min(cur, min(cur* max_so_far, cur* min_so_far));

            max_so_far = tempMax;
            result = max(result, max_so_far);

        }

        return result;

    }
};