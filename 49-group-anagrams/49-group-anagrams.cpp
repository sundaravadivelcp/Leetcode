class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        int index = -1;
        
        for(auto& i: strs){
            auto j = i;
            sort(j.begin(),j.end());
            m[j].push_back(i);
        }
        
        for(auto& i : m){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};