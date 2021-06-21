//https://binarysearch.com/problems/Rod-Cutting
int solve(vector<int>& prices, int n) {
    vector<int> dp(n+1);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(i+j <= n)
                dp[i+j] = max(dp[i+j], dp[j] + prices[i-1]);
        }
    }

    return dp[n];
}