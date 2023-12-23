class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char, pair<int,int>> moves = {{'N', {0,-1}},{'E', {1,0}},{'S',{0,1}},{'W',{-1,0}}};

        unordered_set<string> visited;
        int x = 0, y = 0;
        visited.insert("0,0");

        for(char& c:path){
            x += moves[c].first;
            y += moves[c].second;
            string hash = to_string(x) + "," + to_string(y);
            if(visited.find(hash) != visited.end()){
                return true;
            }
            visited.insert(hash);
        }
        return false;
    }
};