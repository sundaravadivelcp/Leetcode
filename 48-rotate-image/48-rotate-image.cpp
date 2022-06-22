class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0; i<n;i++) {
            for(int j =0; j<i;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        
        for(int i=0;i<n;i++) {
            for(int j =0; j<m/2;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix[0].size()-j-1];
                matrix[i][matrix[0].size()-j-1] = temp;
            }
        }
        
        //print(matrix);
        
    }
    
    void print(vector<vector<int>>& matrix){
        for(int i=0;i<matrix.size();i++) {
            for(int j =0; j<matrix[0].size();j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};