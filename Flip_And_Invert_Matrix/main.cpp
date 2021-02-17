//https://binarysearch.com/problems/Flip-and-Invert-Matrix
vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n; i++)
        reverse(matrix[i].begin(), matrix[i].end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matrix[i][j] = !matrix[i][j];
        }
    }
    return matrix;
}