class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, j = 0;
        double sum = 0, avg = -DBL_MAX;

        while(j<nums.size()){
            sum += nums[j];
            j++;
            if(j-i < k){
                continue;
            }
            if(j-i > k){
                sum -= nums[i];
                i++;
            }
            avg = max(avg, sum/k);
        }
        return avg;
    }
};