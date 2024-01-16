class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int ans = 0, idx = 0;
        vector<int> v(26);

        for(int i = 0; i<keyboard.size();i++){
            v[keyboard[i] - 'a'] = i;
        }

        for(auto& letter:word){
            ans += abs(v[letter - 'a'] - idx);
            idx = v[letter - 'a'];
        }

        return ans;

    }
};