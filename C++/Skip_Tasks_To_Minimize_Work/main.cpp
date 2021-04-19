//https://binarysearch.com/room/Spaghetti-Code-2ubahxVLSk?questionsetIndex=1
int solve(vector<int>& a) {
    typedef long long ll;
    const ll INF = 1e18;
    ll n = a.size();
    //dp[i][j]
    //ith element, j is if we skipped last task or not
    vector<vector<ll>> dp(n+1, vector<ll>(2, INF));
    dp[0][0] = dp[0][1] = 0;
    for(int i = 0; i < n; i++){
        dp[i+1][0] = min({dp[i+1][0], dp[i][1] + a[i], dp[i][0] + a[i]});
        dp[i+1][1] = min(dp[i+1][1], dp[i][0]);
    }

    ll ans = min(dp[n][0], dp[n][1]);
    return ans;
}