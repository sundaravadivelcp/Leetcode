class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> uMap;
        vector<vector<string>> ans;
        for(auto s: strs) {
            string a = s;
            sort(s.begin(),s.end());
            uMap[s].push_back(a);
        }
        for(auto i = uMap.begin(); i != uMap.end(); ++i) {
            ans.push_back(i->second);
        }
        return ans;
    }
};