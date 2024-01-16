class Solution {
public:
    int calculateTime(string keyboard, string word) {
        vector<int> v(26, -1);

        for(int i = 0; i<keyboard.length();i++){
            v[keyboard[i] - 'a'] = i;
        }

        int ans = 0, prev = 0;
        for(auto& c:word){
            ans += abs(v[c - 'a'] - prev);
            prev = v[c - 'a'];
        }

        return ans;

    }
};