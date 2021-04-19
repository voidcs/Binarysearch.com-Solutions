//https://binarysearch.com/problems/Largest-Island-Area
int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<int>> vis(n, vector<int>(m, 0));
    function<bool(int, int)> valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && matrix[x][y] == 1;
    };

    function<int(int, int, int)> dfs = [&](int x, int y, int cnt){
        vis[x][y] = 1;
        cnt++;
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny)){
                vis[nx][ny] = 1;
                cnt += dfs(nx, ny, 0);
            }
        }
        return cnt;
    };
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] && matrix[i][j] == 1){
                int cnt = dfs(i, j, 0);
                ans = max(ans, cnt);
            }
        }
    }
    return ans;
}