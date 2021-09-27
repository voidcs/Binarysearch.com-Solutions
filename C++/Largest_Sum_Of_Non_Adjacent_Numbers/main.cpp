//https://binarysearch.com/problems/Largest-Sum-of-Non-Adjacent-Numbers
int solve(vector<int>& v) {
    int n = v.size();
    vector<vector<int>> dp(n+1, vector<int>(2));
    for(int i = 1; i <= n; i++){
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        dp[i][1] = dp[i-1][1];
        dp[i][1] = max(dp[i][1], dp[i-1][0] + v[i-1]);
        if(i-2 >= 0)
            dp[i][0] = max(dp[i][0], dp[i-2][1]);
    }
    return max(dp[n][0], dp[n][1]);
}