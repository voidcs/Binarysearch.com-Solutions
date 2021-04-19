//https://binarysearch.com/problems/Increasing-Digits
int solve(int n) {
    vector<vector<int>> dp(n+1, vector<int>(10, 0));
    for(int i = 1; i < 10; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = i; j < 10; j++){
            for(int k = j-1; k >= 0; k--){
                dp[i][j] += dp[i-1][k];
            }
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < 10; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans = 0;
    for(int i = 0; i < 10; i++)
        ans += dp[n][i];
    return ans;
}