//https://binarysearch.com/problems/Escape-Maze
int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int INF = 1e7;
    vector<vector<int>> dist(n, vector<int>(m, INF));
    vector<vector<int>> vis(n, vector<int>(m, 0));
    dist[0][0] = 1;
    if(matrix[0][0] == 1)
        return -1;
    queue<array<int, 2>> q;
    q.push({0 ,0});
    array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    function<bool(int, int)> valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && matrix[x][y] == 0;
    };
    while(!q.empty()){
        int x = q.front()[0];
        int y = q.front()[1];
        q.pop();
        vis[x][y] = 1;
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny)){
                vis[nx][ny] = 1;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    if(dist[n-1][m-1] == INF)
        return -1;
    else
        return dist[n-1][m-1];
}