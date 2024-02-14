class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pIdx= 0,nIdx = 1;
        vector<int> ans(nums.size());
        for(int i =0; i<nums.size(); i++){
            if(nums[i] > 0){
                ans[pIdx] = nums[i];
                pIdx += 2;
            } else {
                ans[nIdx] = nums[i];
                nIdx += 2;
            }
        }
        return ans;
    }
};