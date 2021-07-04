//https://binarysearch.com/problems/Paint-Bucket
vector<vector<string>> solve(vector<vector<string>>& g, int a, int b, string target) {
    int n = g.size();
    int m = g[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m));
    array<int, 2> dir [4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    char color = g[a][b][0];
    auto valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y];
    };
    function<void(int, int)> dfs = [&](int x, int y){
        g[x][y] = target;
        vis[x][y] = 1;
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny) && g[nx][ny][0] == color){
                vis[nx][ny] = 1;
                dfs(nx, ny);
            }
        }
    };
    dfs(a, b);
    return g;
}