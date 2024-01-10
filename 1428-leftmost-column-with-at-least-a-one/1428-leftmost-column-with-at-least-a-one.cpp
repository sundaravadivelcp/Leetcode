/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int ans = 101;

        auto v = binaryMatrix.dimensions();
        int rows = v[0], cols = v[1];

        int i = 0, j = cols - 1;

        while(i<rows && j >= 0){
            if(binaryMatrix.get(i,j)){
                ans = min(ans, j);
                j--;
            } else {
                i++;
            }
        }

        if(ans == 101){
            return -1;
        }
        return ans;
    }
};