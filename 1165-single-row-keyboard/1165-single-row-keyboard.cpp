class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int ans = 0, idx = 0;
        unordered_map<char,int> mp;

        for(int i = 0; i<keyboard.size();i++){
            mp[keyboard[i]] = i;
        }

        for(auto& letter:word){
            ans += abs(mp[letter] - idx);
            idx = mp[letter];
        }

        return ans;

    }
};