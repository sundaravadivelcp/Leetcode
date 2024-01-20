class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int size = triangle.size(), total = INT_MAX, pre = INT_MIN;
        int *sum = new int[size]();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j <= i; j++) {
                int tmp = sum[j];
                sum[j] = min (sum[j], pre) + triangle[i][j];
                pre = tmp;
            }
        }
        for (int i = 0; i < size; i++) {
            if (total > sum[i]) {
                total = sum[i];
            }
        }
        delete[] sum;
        return total;
    }
};