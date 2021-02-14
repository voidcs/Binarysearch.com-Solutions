//https://binarysearch.com/problems/Bus-Fare
int solve(vector<int>& a) {
    typedef long long ll;
    const ll INF = 1e18;
    int n = a.size();
    vector<ll> dp(n+1, INF);
    dp[0] = 0;
    ll costs[3] = {2, 7, 25};
    ll days[3] = {1, 7, 30};

    for(int i = 1; i <= n; i++){
        dp[i] = dp[i-1] + 2;
        for(int t = 0; t < 3; t++){
            int d = days[t];
            int j = i;
            while(j >= 1 && a[i-1] - a[j-1] < d){
                j--;
                dp[i] = min(dp[i], dp[j] + costs[t]);
            }
        }
    }

    return dp[n];
}