//https://binarysearch.com/problems/Island-Shape-Perimeter
int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    function<bool(int, int)> valid = [&](int x, int y){
        return (x >= 0 && x < n && y >= 0 && y < m);
    };
    int ans = 0;
    array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int cnt = 0;
            if(matrix[i][j] == 1)
                cnt = 4;
            for(int k = 0; k < 4; k++){
                int nx = i + dir[k][0];
                int ny = j + dir[k][1];
                if(matrix[i][j] == 1 && valid(nx, ny) && matrix[nx][ny] == 1){
                    cnt--;
                }
            }
            ans += cnt;
        }
    }
    return ans;
}