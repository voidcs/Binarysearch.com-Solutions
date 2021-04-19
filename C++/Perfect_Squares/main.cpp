//https://binarysearch.com/problems/Perfect-Squares
int solve(int n) {
    int INF = 1e9;
    vector<int> squares;
    vector<int> dp(n+1, INF);
    dp[0] = 0;
    for(int i = 1; i*i <= n; i++){
        squares.push_back(i*i);
        dp[i*i] = 1;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < squares.size(); j++){
            if(i >= squares[j])
                dp[i] = min(dp[i], dp[i-squares[j]]+1);
        }
    }
    return dp[n];
}