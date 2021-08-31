//https://binarysearch.com/problems/Peak-Heights
vector<vector<int>> solve(vector<vector<int>>& g) {
    int n = g.size();
    int m = g[0].size();
    queue<array<int, 2>> q;
    int INF = 1e9;
    vector<vector<int>> dist(n, vector<int>(m, INF));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == 0){
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }
    array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    auto valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m;
    };
    while(q.size()){
        int x = q.front()[0];
        int y = q.front()[1];
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny) && dist[nx][ny] == INF){
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return dist;
}