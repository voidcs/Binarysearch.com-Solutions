//https://binarysearch.com/problems/Labyrinthian-Possibilities
int solve(vector<vector<int>>& a) {
    int mod = 1e9+7;
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    dp[n-1][m-1] = 1;
    for(int i = n-1; i >= 0; i--){
        for(int j = m-1; j >= 0; j--){
            if(a[i][j] == 1)
                continue;
            if(i+1 < n){
                dp[i][j] = (dp[i][j]+dp[i+1][j])%mod; 
            }
            if(j+1 < m)
                dp[i][j] = (dp[i][j]+dp[i][j+1])%mod;
        }
    }
    return dp[0][0];
}