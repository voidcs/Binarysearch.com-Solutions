//https://binarysearch.com/problems/Edit-Distance
int solve(string a, string b) {
    int n = a.length(), m = b.length();
    const int INF = 1e9;
    vector<vector<int>> dp(n+1, vector<int>(m+1, INF));

    for(int i = 0; i <= min(n, m); i++)
        dp[i][i] = i;
    for(int i = 0; i <= n; i++)
        dp[i][0] = i;
    for(int i = 0; i <= m; i++)
        dp[0][i] = i;
        
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
            dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
            dp[i][j] = min(dp[i][j], dp[i-1][j-1]+1);
            if(a[i-1] == b[j-1])
                dp[i][j] = min(dp[i][j], dp[i-1][j-1]);
        }
    }
    return dp[n][m];
}