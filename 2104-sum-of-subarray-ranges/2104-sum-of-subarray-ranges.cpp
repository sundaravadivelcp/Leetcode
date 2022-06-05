class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long int mini, maxi,ans = 0;
        
        for(int i = 0; i< nums.size(); i++){
            mini = nums[i];
            maxi = nums[i];
            for(int j = i ; j < nums.size(); j++){
                if(mini > nums[j])
                    mini = nums[j];
                if(maxi < nums[j])
                    maxi = nums[j];
                    
                ans += maxi-mini;
            }
        }
        
        return ans;
    }
};