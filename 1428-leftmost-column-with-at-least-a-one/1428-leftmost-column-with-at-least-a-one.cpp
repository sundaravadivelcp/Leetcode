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
        int rows = binaryMatrix.dimensions()[0], cols = binaryMatrix.dimensions()[1];

        int i = 0, j = cols - 1;

        while(i<rows && j >= 0){
            if(binaryMatrix.get(i,j)){
                j--;
            } else {
                i++;
            }
        }

        return j == cols - 1? -1: j + 1;
    }
};