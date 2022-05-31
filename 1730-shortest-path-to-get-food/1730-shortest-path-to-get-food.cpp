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
        cout<<cur.first<<" "<<cur.second<<endl;
        q.push({cur,count});
        count++;
        
        vector<vector<int>> visited( n , vector<int> (m, 0)); 
        visited[cur.first][cur.second] = 1;
        
        while(!q.empty()){
            cur = q.front().first;
            int c = q.front().second;
            q.pop();
            int x = cur.first,y = cur.second;
            cout<<cur.first<<" "<<cur.second<<" "<<c<<endl;
            if(grid[x][y] == '#'){
                found = 1;
                return c;
                break;
            }
            
            if((x+1 < n && x+1 >=0 && y >= 0 && y < m) && grid[x+1][y] != 'X' &&  visited[x+1][y] == 0 ){
                visited[x+1][y] = 1;
                q.push({{x+1,y},c+1});
            }
            if(( x >= 0 && x < n && y+1 >= 0 && y+1 < m) && grid[x][y+1] != 'X' && visited[x][y+1] == 0 ){
                cout<<"here1";
                visited[x][y+1] = 1;
                q.push({{x,y+1},c+1});
            }
            cout<<"here1";
            
            if((x-1 >= 0 && x-1 <n && y >= 0 && y < m) && grid[x-1][y] != 'X' && visited[x-1][y] == 0 ){
                visited[x-1][y] = 1;
                q.push({{x-1,y},c+1});
            }    
            if(( x >= 0 &&  x<n && y-1 >= 0 && y-1 < m) && grid[x][y-1] != 'X' && visited[x][y-1] == 0 ){
                visited[x][y-1] = 1;
                q.push({{x,y-1},c+1});
            }
        }
        return -1;
    }
};