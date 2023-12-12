class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f=0, s = 0;
        for(int& num:nums){
            if(f<num){
                s= f;
                f = num;
            } else if(s<num){
                s = num;
            }
        }
        return (f-1)*(s-1);
    }
};