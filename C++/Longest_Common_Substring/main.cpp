//https://binarysearch.com/problems/Longest-Common-Substring
int solve(string a, string b) {
    int n = a.length(), m = b.length();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}