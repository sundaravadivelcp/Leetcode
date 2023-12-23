class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char, pair<int,int>> m = {{'N', {0,-1}},{'E', {1,0}},{'S',{0,1}},{'W',{-1,0}}};

        set<pair<int, int>> s;
        int x = 0, y = 0;
        s.insert({x,y});

        for(char c:path){
            x += m[c].first;
            y += m[c].second;
            if(s.find({x,y}) != s.end()){
                return true;
            }
            s.insert({x,y});
        }
        return false;
    }
};