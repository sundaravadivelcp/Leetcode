class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        for(int& a:arr){
            mp[a]++;
        }
        unordered_set<int> s;
        for(auto& record:mp){
            if(s.find(record.second) != s.end()){
                return false;
            }
            s.insert(record.second);
        }

        return true;
    }
};