class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX, max =0;
        int n = prices.size();
        for(int i=0; i<n; i++){
            if(prices[i] < min){
                min = prices[i];
            } else if(max < prices[i] - min){
                max = prices[i] - min;
            }
        }
        return max;
    }
};