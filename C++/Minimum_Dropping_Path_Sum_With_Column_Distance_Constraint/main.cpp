//https://binarysearch.com/problems/Minimum-Dropping-Path-Sum-With-Column-Distance-Constraint
int solve(vector<vector<int>>& g) {
    int n = g.size();
    int m = g[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 1e9));
    vector<int> dir = {-1, 0, 1};
    auto valid = [&](int j){
        return j >= 0 && j < m;
    };
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0){
                dp[i][j] = g[i][j];
                continue;
            }
            dp[i][j] = dp[i-1][j] + g[i][j];
            if(j-1 >= 0)
                dp[i][j] = min(dp[i][j], dp[i-1][j-1] + g[i][j]);
            if(j+1 < m)
                dp[i][j] = min(dp[i][j], dp[i-1][j+1] + g[i][j]);
        }
    }
    int ans = 1e9;
    for(int i = 0; i < m; i++)
        ans = min(ans, dp[n-1][i]);
    return ans;
}