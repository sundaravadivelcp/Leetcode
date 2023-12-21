class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum = 0;
        int t = 0;

        for(int  i = 0 ; i< customers.size(); i++){
            t = max(t, customers[i][0]) + customers[i][1];
            sum += t - customers[i][0];
        }
        return sum/customers.size();
    }
};