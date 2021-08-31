//https://binarysearch.com/problems/Wildfire
int solve(vector<vector<int>>& g) {
    if(g.empty())
        return 0;
    int n = g.size();
    int m = g[0].size();
    array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<int>> vis(n, vector<int>(m));
    queue<array<int, 3>> q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == 2){
                q.push({i, j, 0});
            }
        }
    }
    int ans = 0;
    auto valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y];
    };
    while(q.size()){
        int x = q.front()[0];
        int y = q.front()[1];
        int t = q.front()[2];
        vis[x][y] = 1;
        ans = t;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny) && g[nx][ny] == 1){
                q.push({nx, ny, t+1});
                vis[nx][ny] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == 1 && !vis[i][j])
                ans = -1;
        }
    }
    return ans;
}