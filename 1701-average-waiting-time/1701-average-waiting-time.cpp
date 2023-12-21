class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum = 0;
        int t = 0;

        for(auto& customer:customers){
            t = max(t, customer[0]) + customer[1];
            sum += t - customer[0];
        }
        return sum/customers.size();
    }
};