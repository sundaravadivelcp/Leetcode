class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();

        for(int i =0; i< m; i++){
            for(int j = 0; j< n; j++){
                int count = 0, sum = 0;
                for(int x = i-1; x <= i+1; x++){
                    for(int y = j-1; y <= j+1; y++){
                        if(x >= 0 && y >= 0 && x < m && y < n){
                            sum += img[x][y] & 255;
                            count++;
                        }
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