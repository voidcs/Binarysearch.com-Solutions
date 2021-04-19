https://binarysearch.com/problems/Making-Change-Sequel
int solve(vector<int>& a, int amount) {
    int INF = 1e9+7;
    int n = a.size();
    vector<int> dp(amount+1, INF);
    dp[0] = 0;
    for(int i = 0; i <= amount; i++){
        for(int j = 0; j < n; j++){
            if(i >= a[j]){
                dp[i] = min(dp[i], dp[i-a[j]]+1);
            }
        }
    }
    if(dp[amount] == INF)
        return -1;
    else
        return dp[amount];
}