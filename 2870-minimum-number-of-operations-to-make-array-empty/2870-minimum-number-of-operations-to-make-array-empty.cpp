class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }

        int ans = 0;

        for(auto& [num, freq]:m){
            if(freq < 2) return -1;
            if(freq % 3 == 0){
                ans += freq/3;
            } else if(freq % 3 == 2){
                ans += freq/3 + 1;
            } else {
                ans += freq/3 + 1;
            }

        }
        return ans;
    }
};