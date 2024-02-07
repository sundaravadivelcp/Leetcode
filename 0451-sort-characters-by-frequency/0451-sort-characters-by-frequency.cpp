class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int> mp;
        for(int i =0; i<s.size(); i++){
            mp[s[i]]++;
        }
        multimap<int, char> mm;
        
        for (auto& it : mp) {
            mm.insert({ it.second, it.first });
        }

        for (auto it = mm.rbegin(); it != mm.rend(); ++it) {
            int count = it->first;
            while(count--)
                ans += it->second;
        }

        return ans;
    }
};