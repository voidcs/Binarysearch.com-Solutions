//https://binarysearch.com/problems/Condo-Developers
vector<vector<int>> solve(vector<vector<int>>& matrix){
    map<int, int> smallestInRow, smallestInCol;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < m; i++){
        smallestInRow[i] = 0;
        for(int j = 0; j < n; j++){
            smallestInRow[i] = max(smallestInRow[i], matrix[j][i]);
        }
    }
    for(int i = 0; i < n; i++){
        smallestInCol[i] = 0;
        for(int j = 0; j < m; j++){
            smallestInCol[i] = max(smallestInCol[i], matrix[i][j]);
        }
    }
    vector<vector<int>> ans(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans[i][j] = min(smallestInRow[j], smallestInCol[i]);
        }
    }
    return ans;
}