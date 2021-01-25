https://binarysearch.com/problems/Number-of-Islands
int solve(vector<vector<int>>& a) {
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    function<bool(int, int)> valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && a[x][y] == 1;
    };
    function<void(int, int)> dfs = [&](int x, int y){
        vis[x][y] = 1;
        for(int i = 0 ; i < 4; i++){
            int nx = x+dir[i][0];
            int ny = y+dir[i][1];
            if(valid(nx, ny)){
                vis[nx][ny] = 1;
                dfs(nx, ny);
            }
        }
    };
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] && a[i][j] == 1){
                ans++;
                dfs(i, j);
            }
        }
    }
    return ans;
}