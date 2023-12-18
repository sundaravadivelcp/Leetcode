class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int m1= INT_MIN, m2= INT_MIN, l1 = INT_MAX, l2 = INT_MAX;
        for(int num:nums){
            if(m1 < num){
                m2 = m1;
                m1 = num;
            } else if(m2 < num){
                m2 = num;
            }
            if(l1 > num){
                l2 = l1;
                l1 = num;
            } else if(l2 > num){
                l2 = num;
            }
        }

        return m1 * m2 - l1 * l2;
    }
};