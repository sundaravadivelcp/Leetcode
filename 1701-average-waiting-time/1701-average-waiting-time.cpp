class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long sum = 0, n = customers.size(), t = customers[0][0];

        for(int  i = 0 ; i<n; i++){
            sum += customers[i][1];
            if(t > customers[i][0]){
                sum += t - customers[i][0];
            }
            if(t < customers[i][0]){
                t = customers[i][0];
            }
            t += customers[i][1];
        }
        return (double)sum/n;
    }
};