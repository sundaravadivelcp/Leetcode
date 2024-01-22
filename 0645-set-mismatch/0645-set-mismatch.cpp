class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), repeatingNumber, missingNumber;
        unordered_set<int> s;
        int eSum = n*(n+1)/2, aSum = 0;
        for(int i =0;i<n; i++){
            aSum += nums[i];
            if(s.find(nums[i]) != s.end()){
                repeatingNumber = nums[i];
            }
            s.insert(nums[i]);
        }
        missingNumber = eSum - aSum + repeatingNumber;

        return {repeatingNumber, missingNumber};
    }
};