class Solution {
public:
    int getFood(vector<vector<char>>& grid) {
        
        queue<pair<pair<int,int>,int>> q;
        int n= grid.size(), m = grid[0].size(),count = 0, found = 0;
        pair<int, int> cur,temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '*'){
                    cur = {i,j};
                    break;
                }
            }
        }
        q.push({cur,count});
        count++;
        
        grid[cur.first][cur.second] = 'X';
        
        while(!q.empty()){
            cur = q.front().first;
            int c = q.front().second;
            q.pop();
            int x = cur.first,y = cur.second;
            if(grid[x][y] == '#'){
                found = 1;
                return c;
                break;
            }
            
            if((x+1 < n && x+1 >=0 && y >= 0 && y < m) && grid[x+1][y] != 'X'){
                if(grid[x+1][y] !='#')
                    grid[x+1][y]  = 'X';
                q.push({{x+1,y},c+1});
            }
            if(( x >= 0 && x < n && y+1 >= 0 && y+1 < m) && grid[x][y+1] != 'X'){
                if(grid[x][y+1] !='#')
                    grid[x][y+1]= 'X';
                q.push({{x,y+1},c+1});
            }
            
            if((x-1 >= 0 && x-1 <n && y >= 0 && y < m) && grid[x-1][y] != 'X'){
                if(grid[x-1][y] !='#')
                    grid[x-1][y] = 'X';
                q.push({{x-1,y},c+1});
            }    
            if(( x >= 0 &&  x<n && y-1 >= 0 && y-1 < m) && grid[x][y-1] != 'X'){
                if(grid[x][y-1] !='#')
                    grid[x][y-1] = 'X';
                q.push({{x,y-1},c+1});
            }
        }
        return -1;
    }
};