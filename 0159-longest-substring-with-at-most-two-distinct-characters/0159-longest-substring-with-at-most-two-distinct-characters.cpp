class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int ans = 0;
        int i = 0, j = 0;
        unordered_map<char, int> mp;

        while(i<=j && i< s.size() && j < s.size()){
            mp[s[j]]++;
            j++;

            if(mp.size() > 2){
                while(mp.size() > 2){
                    if(mp[s[i]] == 1){
                        mp.erase(mp.find(s[i]));
                    } else {
                        mp[s[i]]--;
                    }
                    i++;
                }
            }

            ans = max(ans,  j-i);
        }

        return ans;
    }
};