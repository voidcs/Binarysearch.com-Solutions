//https://binarysearch.com/problems/Longest-Common-Subsequence-of-Three-Strings
int solve(string a, string b, string c){
    int x = a.length(), y = b.length(), z = c.length();
    int dp[x+1][y+1][z+1];
    for(int i = 0; i <= x; i++)
        for(int j = 0; j <= y; j++)
            for(int k = 0; k <= z; k++)
                dp[i][j][k] = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            for(int k = 0; k < z; k++){
                dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k]);
                dp[i][j+1][k] = max(dp[i][j+1][k], dp[i][j][k]);
                dp[i][j][k+1] = max(dp[i][j][k+1], dp[i][j][k]);
                if(a[i] == b[j] && b[j] == c[k]){
                    dp[i+1][j+1][k+1] = max(dp[i+1][j+1][k+1], dp[i][j][k] + 1);
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= x; i++)
        for(int j = 0; j <= y; j++)
            for(int k = 0; k <= z; k++)
                ans = max(ans, dp[i][j][k]);
    return ans;
}