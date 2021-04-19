//https://binarysearch.com/problems/Nearest-Bus-Stop-From-a-House
int solve(vector<vector<int>>& matrix) {
    const int INF = 1e9;
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dist(n, vector<int>(m, INF));
    queue<array<int, 2>> q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 2){
                dist[i][j] = 0;
                matrix[i][j] = 1;
                q.push({i, j});
            }
        }
    }
    int ans = INF;
    array<int, 2> dir[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    function<bool(int, int)> valid = [&](int x, int y){
        return (x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] != 1);
    };
    while(!q.empty()){
        int x = q.front()[0];
        int y = q.front()[1];
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny)){
                dist[nx][ny] = min(dist[nx][ny], dist[x][y]+1);
                q.push({nx, ny});
                if(matrix[nx][ny] == 3)
                    ans = min(ans, dist[nx][ny]);
                matrix[nx][ny] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout<<dist[i][j]<<" ";
        cout<<endl;
    }
    if(ans == INF)
        return -1;
    else
        return ans;
}