class Solution {
public:
    int n;
    void transpose(vector<vector<int>>& matrix){
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    void reverseRows(vector<vector<int>>& matrix){
        for(vector<int> &v : matrix){
            reverse(v.begin(), v.end());
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        n = matrix.size();
        transpose(matrix);
        reverseRows(matrix);
    }
};