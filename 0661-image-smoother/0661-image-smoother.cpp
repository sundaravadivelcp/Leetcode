class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();

        for(int i =0; i< m; i++){
            for(int j = 0; j< n; j++){
                int count = 0, sum = 0;
                for(int x = max(0, i-1); x < min(m, i+2); x++){
                    for(int y = max(0, j-1); y <min(n, j+2); y++){
                        sum += img[x][y] & 255;
                        count++;
                    }
                    
                }
                img[i][j] |= ((sum/count)<<8);
            }
        }
        for(int i =0; i< m; i++){
            for(int j = 0; j< n; j++){
                img[i][j] >>= 8;
            }
        }

        return img;
    }
};