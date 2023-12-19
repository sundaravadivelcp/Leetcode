class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> dir = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        vector<vector<int>> ans(m,vector<int>(n));

        for(int i =0; i< m; i++){
            for(int j = 0; j< n; j++){
                int count = 1, sum = img[i][j];
                for(auto v:dir){
                    int x = i + v[0], y = j + v[1];
                    if(x>=0 && y>=0 && x<m && y<n){
                        sum += img[x][y];
                        count++;
                    }
                }
                ans[i][j] = sum/count;
            }
        }
        return ans;
    }
};