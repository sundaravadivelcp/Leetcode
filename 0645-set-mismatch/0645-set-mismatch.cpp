class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), repeatingNumber, missingNumber;
        unordered_set<int> s;
        for(int i =0;i<n; i++){
            if(s.find(nums[i]) != s.end()){
                repeatingNumber = nums[i];
            }
            s.insert(nums[i]);
        }
        
        for(int i = 1;i<=n; i++){
            if(s.find(i) == s.end()){
                missingNumber = i;
            }
        }

        return {repeatingNumber, missingNumber};
    }
};