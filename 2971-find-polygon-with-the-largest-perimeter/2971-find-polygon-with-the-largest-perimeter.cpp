class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long ans = -1, sum = 0;
        sort(nums.begin(), nums.end());

        for(int& num: nums){
            if(num < sum){
                ans = num + sum;
            }
            sum += num;
        }

        return ans;
    }
};