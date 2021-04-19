https://binarysearch.com/problems/A-Flight-of-Stairs
int solve(int n) {
    int mod = 1e9+7;
    int ans = 0;
    vector<int> dp(n+1, 0);
    dp[0] = 1, dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2])%mod;
    }
    return dp[n];
}