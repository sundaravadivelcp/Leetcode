class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char, pair<int,int>> moves = {{'N', {0,-1}},{'E', {1,0}},{'S',{0,1}},{'W',{-1,0}}};

        set<pair<int, int>> visited;
        int x = 0, y = 0;
        visited.insert({x,y});

        for(char c:path){
            x += moves[c].first;
            y += moves[c].second;
            if(visited.find({x,y}) != visited.end()){
                return true;
            }
            visited.insert({x,y});
        }
        return false;
    }
};