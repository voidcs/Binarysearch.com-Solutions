//https://binarysearch.com/problems/Rotate-by-90-Degrees-Counter-Clockwise
vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans(n, vector<int>(m, 0));
    int index = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans[n-j-1][i] = matrix[i][j];
        }
    }
    return ans;
}