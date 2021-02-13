//https://binarysearch.com/problems/Number-of-Moves-to-Capture-the-King
int solve(vector<vector<int>>& g) {
    int n = g.size();
    int m = g[0].size();
    array<int, 2> dir[8] = {{1, 2}, {2, 1}, {-1, 2}, {-2, 1}, {1, -2}, {-1, -2}, {-2, -1}, {2, -1}};

    queue<array<int, 2>> q;
    int kx, ky;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == 2){
                kx = i, ky = j;
            }
        }
    }
    const int INF = 1e9;
    vector<vector<int>> dist(n, vector<int>(m, INF));

    function<bool(int, int)> valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m;
    };
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == 1){
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    while(!q.empty()){
        int x = q.front()[0];
        int y = q.front()[1];
        q.pop();
        for(int i = 0; i < 8; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny) && dist[nx][ny] == INF){
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y]+1;
            }
        }
    }
    if(dist[kx][ky] == INF)
        return -1;
    else
        return dist[kx][ky];
}