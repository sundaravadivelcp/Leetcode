class Solution {
public:
    int minTotalDistance(vector<vector<int>>& grid) {
        if(!grid.size()){
            return 0;
        }
        vector<int> posR, posC;
        for(int i =0; i< grid.size(); i++){
            for(int j = 0; j< grid[0].size(); j++){
                if(grid[i][j] == 1){
                    posR.emplace_back(i);
                    posC.emplace_back(j);
                }
            }
        }
        int medianR = posR[posR.size()/2];
        nth_element(posC.begin(), posC.begin() + posC.size()/2, posC.end());
        int medianC = posC[posC.size()/2];

        int totalDistance = 0;
        for(auto pos: posR){
            totalDistance += abs(pos - medianR);
        }
        for(auto pos: posC){
            totalDistance += abs(pos - medianC);
        }

        return totalDistance;
    }
};