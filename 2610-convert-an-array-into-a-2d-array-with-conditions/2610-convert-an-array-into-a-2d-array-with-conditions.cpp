class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> freq(nums.size() + 1);
        sort(nums.begin(), nums.end());
        for(auto num:nums){
            if(freq[num] >= ans.size()){
                ans.push_back({});
            }
            ans[freq[num]].push_back(num);
            freq[num]++;
        }
        return ans;
    }
};