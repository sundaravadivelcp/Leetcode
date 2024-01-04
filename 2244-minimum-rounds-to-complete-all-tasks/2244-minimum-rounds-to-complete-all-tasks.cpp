class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> m;
        int ans = 0;

        for(int task:tasks) {
            m[task]++;
        }

        for(auto record:m) {
            if(record.second == 1){
                return -1;
            }
            ans += (record.second + 2 )/3;
        }
        return ans;

    }
};