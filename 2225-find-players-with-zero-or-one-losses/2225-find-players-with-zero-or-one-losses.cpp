class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> losses;
        set<int> s;

        for(auto& match:matches){
            losses[match[1]]++;
            s.insert(match[0]);
            s.insert(match[1]);
        }
        vector<int> zeroLost;
        vector<int> oneLost;

        for(auto& record:s){
            if(losses.find(record) != losses.end() && losses[record] == 1){
                oneLost.push_back(record);
            } else if(losses.find(record) == losses.end()){
                zeroLost.push_back(record);
            }

        }

        return {zeroLost, oneLost};

    }
};