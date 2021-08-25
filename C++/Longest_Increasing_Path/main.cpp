//https://binarysearch.com/problems/Longest-Increasing-Path
int solve(vector<vector<int>>& v) {
    int n = v.size();
    int m = v[0].size();
    array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<int>> dp(n, vector<int>(m, 1));
    
    auto valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m;
    };
    vector<array<int, 3>> nums;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            nums.push_back({v[i][j], i, j});
        }
    }
    auto comp = [&](array<int, 3> a, array<int, 3> b){
        return a[0] < b[0];
    };
    sort(nums.begin(), nums.end(), comp);
    int ans = 1;
    for(auto x: nums){
        for(int i = 0; i < 4; i++){
            int nx = x[1] + dir[i][0];
            int ny = x[2] + dir[i][1];
            if(valid(nx, ny) && v[nx][ny] > x[0]){
                dp[nx][ny] = max(dp[nx][ny], dp[x[1]][x[2]] + 1);
                ans = max(ans, dp[nx][ny]);
            }
        }
    }
    return ans;
}