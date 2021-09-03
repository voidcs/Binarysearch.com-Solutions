//https://binarysearch.com/problems/Minimum-Dropping-Path-Sum
int solve(vector<vector<int>>& g) {
    int n = g.size();
    int m = g[0].size();
    const int INF = 1e9;
    vector<vector<int>> dp(n, vector<int>(m));
    int best = -1, secondBest = -1, bestIndex = -1;
    for(int i = 0; i < n; i++){
        int a = INF, b = INF, newBestIndex;
        for(int j = 0; j < m; j++){
            if(i == 0)
                dp[i][j] = g[i][j];
            else if(j == bestIndex)
                dp[i][j] = secondBest + g[i][j];
            else
                dp[i][j] = best + g[i][j];
            if(a > dp[i][j]){
                b = a;
                a = dp[i][j], newBestIndex = j;
            }
            else if(b > dp[i][j])
                b = dp[i][j];
        }
        bestIndex = newBestIndex;
        best = a, secondBest = b;
    }
    int ans = INF;
    for(int i = 0; i < m; i++)
        ans = min(ans, dp[n-1][i]);
    return ans;
}