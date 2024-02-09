class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = INT_MIN;
    
        int product=1;
        
        for(int num : nums){
            product *= num;
            result = max(product, result);
            if(product == 0)
                product = 1;
            
        }
        
        product = 1;
        for(int i=nums.size()-1; i>=0; i--){
            product *= nums[i];
            result = max(product, result);
            if(product ==0) 
                product = 1;
        }
        
        return result;

    }
};