class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum = 0, t = customers[0][0];

        for(int  i = 0 ; i< customers.size(); i++){
            sum += customers[i][1];
            if(t > customers[i][0]){
                sum += t - customers[i][0];
            }
            if(t < customers[i][0]){
                t = customers[i][0];
            }
            t += customers[i][1];
        }
        return sum/customers.size();
    }
};