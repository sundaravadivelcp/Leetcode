class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f=INT_MIN, s = INT_MIN;
        for(int i =0; i<nums.size();i++){
            if(f<nums[i]){
                s= f;
                f = nums[i];
            } else if(s<nums[i]){
                s = nums[i];
            }
        }
        return (f-1)*(s-1);
    }
};