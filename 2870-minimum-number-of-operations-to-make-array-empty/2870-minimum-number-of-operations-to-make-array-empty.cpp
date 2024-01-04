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
            ans += (freq + 2)/3;

        }
        return ans;
    }
};