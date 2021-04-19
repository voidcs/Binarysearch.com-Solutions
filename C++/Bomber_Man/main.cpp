//https://binarysearch.com/problems/Bomber-Man
int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    queue<array<int, 2>> q;
    set<int> row, col;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 1){
                row.insert(i);
                col.insert(j);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(row.count(i) || col.count(j))
                continue;
            else
                ans++;
        }
    }
    return ans;
}