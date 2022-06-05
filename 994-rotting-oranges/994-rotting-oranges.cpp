class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int steps = 0, cf=0, cr = 0, ct =0; 
        int n = grid.size(),m = grid[0].size();
        
        
        for(int i=0; i < n; i++){
            for(int j=0; j < m; j++){
                if(grid[i][j] == 2){
                    cr++;
                    ct++;
                } else if(grid[i][j] == 1){
                    if(!((i+1 <n && grid[i+1][j] != 0) || (i-1>=0 && grid[i-1][j] != 0) || (j+1 < m && grid[i][j+1] != 0) || (j-1 >=0 && grid[i][j-1] != 0))){
                        return -1;
                    }
                    cf++;
                    ct++;
                }
            }
        }
        
        if(cf ==0)
            return 0;
        
        if(cr == 0)
            return -1;
        
        
        while(cr < ct){
            set<pair<int,int>> s;
            for(int i=0; i < n; i++){
                for(int j=0; j < m; j++){
                    if(grid[i][j] == 2){
                        if(i+1 <n && grid[i+1][j] ==1){
                            s.insert({i+1,j});
                        }
                        if(i-1>=0 && grid[i-1][j] ==1){
                            s.insert({i-1,j});
                        }
                        if(j+1 < m && grid[i][j+1] ==1){
                            s.insert({i,j+1});
                        }
                        if(j-1 >=0 && grid[i][j-1] ==1){
                            s.insert({i,j-1});
                        }
                    }
                }
            }
            if(s.size() == 0){
                break; 
            }
            for(auto const &it : s){
                grid[it.first][it.second] = 2;
                cr++;
            }
            steps++;
        }
        
        if(cr<ct)
            return -1;
        
        return steps;
    }
};