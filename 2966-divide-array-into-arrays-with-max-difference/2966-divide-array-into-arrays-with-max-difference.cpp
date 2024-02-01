class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        
        int i = 0;
        while(i < nums.size()){
            vector<int> v;
            if(nums[i+1] - nums[i] >k || nums[i+2] - nums[i+1] > k || nums[i+2] - nums[i] > k){
                return {};
            } else{
                answer.push_back({nums[i], nums[i+1], nums[i+2]});
                i+=3;
            }
        }

        return answer;
    }
};