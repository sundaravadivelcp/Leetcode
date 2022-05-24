class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            auto it = m.find(target - nums[i]);
            if(it != m.end() && it->second != i){
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
            m[nums[i]] = i; 
        }
        return ans;
    }
};