class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res; 
    
    sort(nums.begin(), nums.end());
    
    for(int i=0; i<(int)nums.size()-2; i++){  //why typecast? check the approach-2
        if(i==0 || (i>0 && nums[i]!=nums[i-1])){  //we'll always take the first value for any kind of input, for rest of the cases (when i>0) we'll take only those values that haven't been checked before, means we'll ignore the duplicates
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int temp=nums[i]+nums[j]+nums[k];
                if(temp==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    
                    while(j<k && nums[j]==nums[j+1]) j++;  //for removing the duplicate 'nums[j]'
                    while(j<k && nums[k]==nums[k-1]) k--;  //for removing duplicate 'nums[k]'
                    
                    j++; k--;  //as we have removed the duplicates we need to shift to a new value of nums[j] and nums[k]
                }else if(temp<0) 
                    j++;  //we are moving 'j' forward because we need a greater value in order to reach 
                else 
                    k--;   //for the same reason we decrement 'k' as we need a smaller sum
            }
        } 
    }
    
    return res;
    }
};