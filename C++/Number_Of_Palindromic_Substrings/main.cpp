https://binarysearch.com/problems/Number-of-Palindromic-Substrings
int solve(string s) {
    int n = s.length();
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for(int i = 0; i <= n; i++){
        dp[0][i] = 1;
        dp[1][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(j+i-1 < n){
                if(s[j] == s[i+j-1]){
                    if(dp[i-2][j+1] == 1)
                        dp[i][j] = 1;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(dp[i][j])
                ans++;
        }
    }
    return ans;
}