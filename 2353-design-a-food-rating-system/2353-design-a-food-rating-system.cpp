class FoodRatings {
    unordered_map<string, pair<string,int>> m;
    unordered_map<string, vector<pair<string, int>>> c;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for(int i =0; i< n; i++){
            m[foods[i]] = {cuisines[i], ratings[i]};
            c[cuisines[i]].push_back({foods[i], ratings[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        m[food].second = newRating;
        for(auto & p :  c[m[food].first]){
            if(p.first == food){
                p.second = newRating;
                break;
            }
        }
    }
    
    string highestRated(string cuisine) {
        int maxR = 0;
        string maxF = "";
        for(auto & p :  c[cuisine]){
            if(maxR < p.second){
                maxR = p.second;
                maxF = p.first;
            } else if(maxR == p.second){
                if(maxF > p.first){
                    maxF = p.first;
                }
            }
        }
        return maxF;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */