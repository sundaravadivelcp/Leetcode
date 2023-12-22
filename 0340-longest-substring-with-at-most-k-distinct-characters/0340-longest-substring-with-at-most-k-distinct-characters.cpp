class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int ans = 0;
        int i = 0, j = 0;
        unordered_map<char, int> mp;

        while(j < s.size()){
            mp[s[j]]++;
            j++;

            if(mp.size() > k){
                while(mp.size() > k){
                    if(mp[s[i]] == 1){
                        mp.erase(s[i]);
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