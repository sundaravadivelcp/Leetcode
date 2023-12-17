class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j= n-1, ans = -1;
        sort(nums.begin(), nums.end()); 
        while(i<n && j>=0 && i != j){
            if(nums[i] + nums[j] >= k){
                j--;
            } else {
                ans = max(ans, nums[i] + nums[j]);
                cout<< nums[i] << " + "<< nums[j] << " = "<< nums[i] + nums[j] <<endl;
                i++;
            }
        }
        return ans;
    }
};