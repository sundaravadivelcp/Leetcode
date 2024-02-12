class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans, count = 0;
        for(const int& num:nums){
            if(count == 0){
                ans = num;
            }
            count += (ans == num) ? 1:-1;
        }
        return ans;
    }
};