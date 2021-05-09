vector<vector<int>> solve(vector<vector<int>>& v) {
    array<int, 2> dir[8] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
    int n = v.size(), m = v[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    auto valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m;
    };
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int cnt = 0;
            for(int k = 0; k < 8; k++){
                int nx = i + dir[k][0];
                int ny = j + dir[k][1];
                if(valid(nx, ny) && v[nx][ny] == 1)
                    cnt++;
            }
            if(v[i][j] == 1){
                if(cnt == 2 || cnt == 3)
                    ans[i][j] = 1;
                else
                    ans[i][j] = 0;
            }
            else if(v[i][j] == 0){
                if(cnt == 3)
                    ans[i][j] = 1;
                else
                    ans[i][j] = 0;
            }
        }
    }
    return ans;
}