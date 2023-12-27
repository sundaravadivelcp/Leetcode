class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, sum = 0, m = neededTime[0], n = colors.size();
        char c = colors[0];
        sum += neededTime[0];

        for(int i = 1; i < n; i++){
            if(colors[i] == c){
                sum += neededTime[i];
                m = max(neededTime[i], m);
            } else {
                ans += sum - m; 
                c = colors[i];
                m = neededTime[i];
                sum = m;
            }
        }
        if(sum > neededTime[n-1]){
            ans += sum - m; 
        }
        return ans;

    }
};