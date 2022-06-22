class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        int i,j;
        for(i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                s = 1;
                break;
            }
        }
        
        if(!s){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(j =n-1; j>=0; j--){
            if(nums[j] > nums[i]){
                break;
            }
        }
        
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
        reverse(nums.begin()+i+1,nums.end());
        
    }
};