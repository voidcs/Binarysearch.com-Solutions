//https://binarysearch.com/problems/Zero-Matrix
vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> v(n, vector<int>(m, 1));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                for(int k = 0; k < n; k++){
                    v[k][i] = 0; 
                }
                for(int k = 0; k < m; k++){
                    v[j][k] = 0;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j])
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(row.count(i) || col.count(j))
                matrix[i][j] = 0;
        }
    }
    return matrix;
}