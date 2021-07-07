//https://binarysearch.com/problems/Longest-Common-Subsequence-of-Three-Strings
int solve(string a, string b, string c){
    int x = a.length(), y = b.length(), z = c.length();
    int dp[x+1][y+1][z+1];
    for(int i = 0; i <= x; i++)
        for(int j = 0; j <= y; j++)
            for(int k = 0; k <= z; k++)
                dp[i][j][k] = 0;
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            for(int k = 1; k <= z; k++){
                dp[i][j][k] = max({dp[i][j][k], dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]});
                if(a[i-1] == b[j-1] && b[j-1] == c[k-1]){
                    dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-1][k-1] + 1);
                }
            }
        }
    }
    return dp[x][y][z];
}