//https://binarysearch.com/problems/Bull-of-Wall-Street
int solve(vector<int>& v) {
    int n = v.size();
    vector<vector<int>> dp(4, vector<int>(n+1));
    for(int i = 0; i <= n; i++)
        dp[0][i] = -1e9, dp[2][i] = -1e9;
    for(int i = 0; i < n; i++){
        if(i){
            if(i > 1){
                dp[3][i] = max(dp[3][i-1], dp[2][i-1] + v[i]);
                dp[2][i] = max(dp[2][i-1], dp[1][i-1] - v[i]);
            }
            dp[1][i] = max(dp[1][i-1], dp[0][i-1] + v[i]);
        }
        dp[0][i] = max(dp[0][i], -v[i]);
        if(i)
            dp[0][i] = max(dp[0][i], dp[0][i-1]);
    }
    int ans = 0;
    for(int i = 0; i <= n; i++){
        ans = max({ans, dp[0][i], dp[1][i], dp[2][i], dp[3][i]});
    }
    return ans;
}