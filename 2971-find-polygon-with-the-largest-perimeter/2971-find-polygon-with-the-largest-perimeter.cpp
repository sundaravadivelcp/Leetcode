class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long ans = -1, sum = 0;
        sort(nums.begin(), nums.end());
        vector<long long> v;

        for(int& num: nums){
            sum += num;
            v.push_back(sum);
        }

        for(int i = nums.size() - 2; i>= 0; i--){
            if(v[i] > nums[i+1]){
                ans = v[i] + nums[i+1];
                break;
            }
        }

        return ans;
    }
};